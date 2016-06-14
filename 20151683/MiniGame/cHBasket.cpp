#include "cHBasket.h"

cHBasket::cHBasket()
{
	m_hPoint.setPointX(0);
	m_hPoint.setPointY(0);
}

void cHBasket::Update(clock_t _CurTime)
{
	m_OldMoveTime = _CurTime;
	m_hPoint.setPointX((m_hPoint.getPointX() + m_iDist));

	if (m_hPoint.getPointX() == BOUNDARY_MIN || m_hPoint.getPointX() + 1 == BOUNDARY_MAX)
		m_iDist = -1 * m_iDist;
}

void cHBasket::Render()
{
	ScreenPrint(m_hPoint.getPointX(), m_hPoint.getPointY(), "¢Ë");
}