#include "cHHeart.h"

cHHeart::cHHeart()
{
	m_hPoint.setPointX(0);
	m_hPoint.setPointY(0);
}

void cHHeart::Update(int _BasketX, int _BasketY, clock_t _CurTime)
{
	m_iLife = 1;
	m_iDist = 1;
	m_hPoint.setPointX(_BasketX);
	m_hPoint.setPointY(_BasketY + 1);
	m_OldMoveTime = _CurTime;
	m_MoveTime = rand() % 300 + 100;  // 최소 100, 최대 399 밀리세컨드
}

void cHHeart::Render()
{
	if (m_iLife == 1)
	ScreenPrint(m_hPoint.getPointX(), m_hPoint.getPointY(), "♡");
}