#include "cHBar.h"

cHBar::cHBar()
{
}

void cHBar::Update(int _Key, clock_t _CurTime)
{
	int i;

	if (_Key == 'j')
	{
		if (_CurTime - m_OldMoveTime > m_MoveTime)
		{
			m_OldMoveTime = _CurTime;
			if (m_iX[0] - 1 >= BOUNDARY_MIN)   // 版拌 康开 贸府 面倒 贸府
			{
				for (i = 0; i < m_iBarLength; i++)
					m_iX[i] -= 1;
			}
		}
	}
	else if (_Key == 'l')
	{

		if (_CurTime - m_OldMoveTime > m_MoveTime)
		{
			m_OldMoveTime = _CurTime;
			if (m_iX[m_iBarLength - 1] + 2 <= BOUNDARY_MAX) // 版拌 康开 面倒 贸府
			{
				for (i = 0; i < m_iBarLength; i++)
					m_iX[i] += 1;
			}
		}
	}
}

void cHBar::Render()
{
	int i;
	for (i = 0; i < m_iBarLength; i++)
		ScreenPrint(getX(i), getY(), "⒚");
}