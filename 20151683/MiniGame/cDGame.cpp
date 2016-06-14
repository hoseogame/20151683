#include "cDGame.h"
#include "Screen.h"
#include <stdio.h>
cDGame::cDGame()
{
	setStage(-1);				// �������� ��
	setGrade(0);				// ���� 
	m_nDudagiCount = 0;			// ���� �δ��� ��
	m_nTotalGrade = 0;			// ����	
	m_GameStartTime = 0;
	m_UpdateOldTime = 0;
	m_RemainTime = 0;
	m_Mangchi;					// ��ġ Ŭ����
	
	m_GameState = INIT;		// ���ӻ���
}

cDGame::~cDGame()
{

}

void cDGame::InitGame()
{
	// ���� ��ü�� �ʱ�ȭ
	if (getStage() == -1) // 1���� �ʱ�ȭ�� �Ǵ� �κп� ���� ó�� ����
	{
		setStage(0);
		m_Dudagi[0].setPoint(10,15);
		m_Dudagi[1].setPoint(20, 15);
		m_Dudagi[2].setPoint(30, 15);
		m_Dudagi[3].setPoint(10, 10);
		m_Dudagi[4].setPoint(20, 10);
		m_Dudagi[5].setPoint(30, 10);
		m_Dudagi[6].setPoint(10, 5);
		m_Dudagi[7].setPoint(20, 5);
		m_Dudagi[8].setPoint(30, 5);		
	}
	m_nDudagiCount = 0; // ���� �δ��� ����	
	m_Grade = 0;
	
	// ����ü 2���� �� �ʱ�ȭ
	setStageInfo(m_StageInfo);

	// ��ġ�� �ʱ�ȭ
	m_Mangchi.setStartTime(getGameStartTime());
	m_Mangchi.setIsAttack(0);
	m_Mangchi.setIndex(0);
	m_Mangchi.setStayX(38);
	m_Mangchi.setStayY(10);
	m_Mangchi.setStartTime(m_GameStartTime);
	m_Mangchi.setDelayTime(300);
	// �δ����� �ʱ�ȭ
	int i;

	for (i = 0; i < 9; i++)
	{
		m_Dudagi[i].setStayTime(rand() % (m_StageInfo[getStage()].DownLimitTime + 10)); // Note: �ּ� 10�� �ȴ�.
		m_Dudagi[i].setOldTime(clock());
		m_Dudagi[i].setState(SETUP);
		m_Dudagi[i].setOutPutTime(rand() % (m_StageInfo[getStage()].UpLimitTime + 10)); //�ּ� 10�� �ȴ�.
	}

	

}

void cDGame::setStageInfo(STAGE_INFO *m_StageInfo)
{
	// ������ ���� ����
	STAGE_INFO tmp[3] = {
		{ 2, 1000 * 10, 6000, 4000 },
		{ 5, 1000 * 10, 2000, 2000 },
		{ 50, 1000 * 120, 1000, 1000 }
	};

	// �Ű������� ����
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		m_StageInfo[i] = tmp[i];
	}
}


void cDGame::updateGame(int _nKey)
{

	int i;
	clock_t CurTime = clock();

	switch (getGameState())
	{
	case READY:
		if (CurTime - getUpdateOldTime() > 2000)  // 2��
		{
			setGameState(RUNNING);
			setGameStartTime(CurTime);
		}
		break;
	case RUNNING:

		switch (_nKey)
		{
		case '1':  // ��ġ Ű �Է� 1 ~ 9����
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			m_Mangchi.Update(_nKey);
		break;
		}

		if ((CurTime - getGameStartTime()) > (m_StageInfo[getStage()].LimitTime))
		{
			setGameState(STOP);
			return;
		}
		else {
			// �δ��� ������Ʈ	
			for (i = 0; i < 9; i++)
			{
				switch (m_Dudagi[i].getState())
				{
				case SETUP:
					m_Dudagi[i].setOldTime(CurTime);
					m_Dudagi[i].setOutPutTime(rand() % (int)m_StageInfo[getStage()].UpLimitTime + 10);
					m_Dudagi[i].setStayTime(rand() % (int)m_StageInfo[getStage()].DownLimitTime + 10);
					m_Dudagi[i].setState(UP);
					break;
				case UP:
					if (CurTime - m_Dudagi[i].getOldTime() > m_Dudagi[i].getOutPutTime())
					{
						m_Dudagi[i].setOldTime(CurTime);
						m_Dudagi[i].setState(DOWN);
					}
					break;
				case DOWN:
					if (CurTime - m_Dudagi[i].getOldTime() > m_Dudagi[i].getStayTime())
						m_Dudagi[i].setState(SETUP);
					break;
				}
			}

			// ��ġ ������Ʈ 
			if (m_Mangchi.getIsAttack())
			{
				// �浹 �׽�Ʈ ��ġ�� ���� �ϳ��� �δ����� ���� �� �ֱ⿡ �ϳ��� ������� �浹 üũ�� ���� ���´�.
				for (i = 0; i < 9; i++)
				{
					if (m_Dudagi[i].getState() == UP && i == m_Mangchi.getIndex())
					{
						m_Grade += 10;
						m_nDudagiCount++;
						m_Dudagi[i].setState(DOWN); // �׾����� �ٿ� ���·� �ٷ� ��ȯ�� �ϵ��� �Ѵ�.																						
						break;
					}
				}

				// Note: ��ġ�� ���¸� �������ִ� �κ� ��ġ�� ���� ���� ������ �ð� ���� �ӹ����� �ϱ� ���� �κ�
				if (CurTime - m_Mangchi.getStartTime() > m_Mangchi.getDelayTime())
				{
					m_Mangchi.setIsAttack(0);
				}
			}

			m_RemainTime = (m_StageInfo[m_nStage].LimitTime - (CurTime - m_GameStartTime)) / 1000; // ���� ���� ���� �ð�
		}
		break;
	case STOP:
		// �����̳� ���и� �Ǵ����־ ����� ���ִ� �κ��� �;� �Ѵ�.
		if (m_nDudagiCount >= m_StageInfo[m_nStage].nCatchDudagi)
		{
			m_UpdateOldTime = CurTime;
			m_GameState = SUCCESS;
			m_nTotalGrade += m_Grade;
		}
		else {
			m_GameState = FAILED;
		}
		break;
	case SUCCESS:
		if (CurTime - m_UpdateOldTime > 3000)
		{
			m_UpdateOldTime = CurTime;
			m_Grade = 0;
			++m_nStage;
			InitGame();
			m_GameState = READY;
		}
		break;
	}
}

void cDGame::renderGame()
{
	int i;
	char string[100];

	ScreenClear();

	switch (m_GameState)
	{
	case INIT:
		if (getStage() == 0)
			m_Screen.InitScreen();
		break;

	case READY:
		m_Screen.ReadyScreen();
		sprintf_s(string, "%d", getStage() + 1);
		ScreenPrint(16, 11, string);
		break;

	case RUNNING:
		m_Screen.RunningScreen();

		sprintf_s(string, "��ǥ �δ��� : %d  ���� �δ��� : %d", m_StageInfo[m_nStage].nCatchDudagi, m_nDudagiCount);
		ScreenPrint(2, 1, string);
		sprintf_s(string, "�������� : %d ���� : %d ���� �ð� : %d ", m_nStage + 1, m_Grade, m_RemainTime);
		ScreenPrint(2, 2, string);

		for (i = 0; i < 9; i++)
		{
			m_Dudagi[i].Render();
		}

		m_Mangchi.Render();

		break;

	case SUCCESS:
		m_Screen.SuccessScreen();
		sprintf_s(string, "%d", getStage() + 1);
		ScreenPrint(20, 11, string);
		sprintf_s(string, "%d", m_nDudagiCount);
		ScreenPrint(21, 17, string);
		sprintf_s(string, "%d", m_nTotalGrade);
		ScreenPrint(14, 19, string);
		break;

	case FAILED:
		m_Screen.FailureScreen();
		sprintf_s(string, "%d", m_nStage + 1);
		ScreenPrint(16, 11, string);
		break;

	case RESULT:
		m_Screen.ResultScreen();
		sprintf_s(string, "%d", m_nTotalGrade);
		ScreenPrint(25, 11, string);
		break;
	}
	ScreenFlipping();
}


void cDGame::runGame()
{
	int nKey = 10;

	ScreenInit();
	InitGame();        // �ʱ�ȭ

	while (1)
	{
		if (_kbhit())
		{
			if (m_GameState == RESULT)
				break;

			nKey = _getch();
			switch (nKey)
			{
			case ' ':
				if (m_GameState == INIT && m_nStage == 0)
				{
					m_GameState = READY;
					m_UpdateOldTime = clock();  // ready�� �����ð� ������ �ֱ� ���� 							
				}
				break;
			case 'y':
			case 'Y':
				if (m_GameState == FAILED)
				{
					InitGame();
					m_GameState = READY;
					m_Grade = 0;
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

		updateGame(nKey);    // ������ ����
		renderGame();    // ȭ�� ���
		nKey = 10;
	}
	ScreenRelease();
}