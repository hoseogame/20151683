#include "cHGame.h"


cHGame::cHGame()
{
	m_GameState = INIT;
	m_iStage = -1;
	m_iGrade = 0; // 점수 
	m_iTotalGrade = 0; // 총점
	m_iHeartDownCount = 0;
	m_iDeadHeartCount = 0;	// 죽은 하트 개수
	m_isGameRunning = 1;

	//cHStageInfo::cHStageInfo();
}

void cHGame::runGame()
{
	int nKey = 10;
	clock_t CurTime;

	ScreenInit();
	initGame();

	while (m_isGameRunning == 1)
	{
		CurTime = clock();
  		if (_kbhit())
		{
			if (m_GameState == RESULT)
				break;

			nKey = _getch();

			switch (nKey)
			{
			case ' ':
				if (m_GameState == INIT && m_iStage == 0)
				{
					m_GameState = READY;
					m_UpdateOldTime = clock();  // ready를 일정시간 지속해 주기 위해 							
				}
				break;
			case 'y':
			case 'Y':
				if (m_GameState == FAILED)
				{
					initGame();
					m_GameState = READY;
					m_UpdateOldTime = clock();
				}
				break;
			case 'n':
			case 'N':
				if (m_GameState == FAILED)
				{
					m_GameState = RESULT;
				}
				break;
			}
		}
		updateGame(nKey);
		renderGame();
		nKey = 10;
	}
}

void cHGame::initGame()
{
	int i;
	if (m_iStage == -1) // 1번만 초기화가 되는 부분에 대한 처리 사항
	{
		m_iStage = 0;
	}
	cHStageInfo::cHStageInfo();
	m_iGrade = 0;

	// Note: 막대기 초기화      	 
	m_Bar.setY(22);
	m_Bar.setBarLength(m_StageInfo.getBarLength(m_iStage)); // 막대기의 길이 
	m_Bar.setOldMoveTime(clock());
	m_Bar.setMoveTime(40);

	for (i = 0; i < m_Bar.getBarLength(); i++)
	{
		m_Bar.setX((10 + 2 * (i + 1)), i); // 15 컬럼부터		
	}

	// Note: 하트 바구니 초기화
	m_Basket.setX(m_StageInfo.getBasketX(m_iStage));
	m_Basket.setY(m_StageInfo.getBasketY(m_iStage));
	m_Basket.setOldMoveTime(clock());
	m_Basket.setMoveTime(m_StageInfo.getBasketMoveTime(m_iStage));
	m_Basket.setDownHeartTime(m_StageInfo.getBasketDownHeartTime(m_iStage));
	m_Basket.setOldDownHeartTime(clock());
	m_Basket.setDist(1);

	//
	m_iHeartDownCount = 0;
	m_iDeadHeartCount = 0;
	m_iHeartCount = 0;
}

void cHGame::updateGame(int _nKey)
{
	int i, nLength;
	clock_t CurTime = clock();

	switch (m_GameState)
	{
	case READY:
		if (CurTime - m_UpdateOldTime > 3000)  // 2초
		{
			m_GameState = RUNNING;
			m_GameStartTime = CurTime;
		}
		break;

	case RUNNING:
		switch (_nKey)
		{
		case 'j':
			m_Bar.Update('j', CurTime);
			break;

		case 'l':
			m_Bar.Update('l', CurTime);
			break;
		}

		if (m_iDeadHeartCount == m_StageInfo.getHeartCount(m_iStage))
		{
			m_GameState = STOP;
			return;
		}

		if ((CurTime - m_Basket.getOldMoveTime()) > m_Basket.getMoveTime())
		{
			m_Basket.Update(CurTime);
		}

		if (m_iHeartDownCount < m_StageInfo.getHeartCount(m_iStage))
		{
			if ((CurTime - m_Basket.getOldDownHeartTime()) > m_Basket.getDownHeartTime())
			{
				m_Basket.setOldDownHeartTime(CurTime);
				m_Heart[m_iHeartDownCount].Update(m_Basket.getX(), m_Basket.getY(), CurTime);
				m_iHeartDownCount++;
			}
		}
		else
		{
			m_Basket.setDist(0); // 하드 이동하지 못하게 한다.
		}

		nLength = m_StageInfo.getBarLength(m_iStage);

		for (i = 0; i < m_iHeartDownCount; i++)
		{
			if (m_Heart[i].getLife() == 1)
			{
				if (CurTime - m_Heart[i].getOldMoveTime() > m_Heart[i].getMoveTime())
				{
					m_Heart[i].setOldMoveTime(CurTime);
					m_Heart[i].setY(m_Heart[i].getY() + m_Heart[i].getDist());

					// Note: 막대기와 하트의 충돌 체크 
					if (m_Heart[i].getY() >= m_Bar.getY())
					{
						if ((m_Heart[i].getX() >= m_Bar.getX(0) && m_Heart[i].getX() <= (m_Bar.getX(nLength - 1) + 1))
							|| ((m_Heart[i].getX() + 1) >= m_Bar.getX(0) && (m_Heart[i].getX() + 1) <= (m_Bar.getX(nLength - 1) + 1)))
						{
							m_Heart[i].setLife(0);
							//득점과 연결
							m_iGrade += 10;
							m_iHeartCount++;
							m_iDeadHeartCount++;
						}
						else if (m_Heart[i].getY() > 22) // 하단의 경계 영역과 충돌
						{
							m_Heart[i].setLife(0);
							m_iDeadHeartCount++;
						}
					}
				}
			}
		}

		break;
	case STOP:
		//// 성공이냐 실패를 판단해주어서 출력을 해주는 부분이 와야 한다.  
		if (m_iHeartCount >= m_StageInfo.getGoalHeartCount(m_iStage))
		{
			m_UpdateOldTime = CurTime;
			m_GameState = SUCCESS;
			m_iTotalGrade += m_iGrade;
		}
		else
		{
			m_GameState = FAILED;
		}
		break;
	case SUCCESS:
		if (CurTime - m_UpdateOldTime > 3000)
		{
			m_UpdateOldTime = CurTime;
			++m_iStage;
			initGame();
			m_GameState = READY;
		}
		break;
	}
}

void cHGame::renderGame()
{
	int i;
	char string[100];

	ScreenClear();

	switch (m_GameState)
	{
	case INIT:
		if (m_iStage == 0)
			m_Screen.InitScreen();
		break;

	case READY:
		m_Screen.ReadyScreen();
		sprintf(string, "%d", m_iStage + 1);
		ScreenPrint(17, 11, string);
		break;
	case RUNNING:
		m_Screen.RunningScreen();
		sprintf(string, "스테이지 : %d", m_iStage + 1);
		ScreenPrint(47, 2, string);
		sprintf(string, "전체 하트 개수 : %d ", m_StageInfo.getHeartCount(m_iStage));
		ScreenPrint(47, 4, string);
		sprintf(string, "목표 하트 개수 : %d ", m_StageInfo.getGoalHeartCount(m_iStage));
		ScreenPrint(47, 6, string);
		sprintf(string, "담은 하트 개수 : %d ", m_iHeartCount);
		ScreenPrint(47, 8, string);
		sprintf(string, "점수 : %d ", m_iGrade);
		ScreenPrint(47, 10, string);

		// 각 개체 렌더 함수 호출
		m_Basket.Render();

		for (i = 0; i < m_iHeartDownCount; i++)
		{
			m_Heart[i].Render();
		}

		m_Bar.Render();

		break;
	case SUCCESS:
		m_Screen.SuccessScreen();
		sprintf(string, "%d", m_iStage + 1);
		ScreenPrint(19, 7, string);
		sprintf(string, "총점: %d", m_iTotalGrade);
		ScreenPrint(18, 17, string);
		break;
	case FAILED:
		m_Screen.FailureScreen();
		sprintf(string, "%d", m_iStage + 1);
		ScreenPrint(20, 9, string);
		break;

	case RESULT:
		m_Screen.ResultScreen();
		sprintf(string, "%d", m_iTotalGrade);
		ScreenPrint(21, 11, string);
		break;
	}


	ScreenFlipping();
}