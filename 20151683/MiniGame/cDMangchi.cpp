#include "cDMangchi.h"
#include "Screen.h"

cDMangchi::cDMangchi()
{
	m_hitX[0] = 10;	m_hitY[0] = 15;
	m_hitX[1] = 20;	m_hitY[1] = 15;
	m_hitX[2] = 30; m_hitY[2] = 15;
	m_hitX[3] = 10;	m_hitY[3] = 10;
	m_hitX[4] = 20;	m_hitY[4] = 10;
	m_hitX[5] = 30;	m_hitY[5] = 10;
	m_hitX[6] = 10;	m_hitY[6] = 5;
	m_hitX[7] = 20;	m_hitY[7] = 5;
	m_hitX[8] = 30;	m_hitY[8] = 5;
}

cDMangchi::~cDMangchi()
{

}

void cDMangchi::Mangchi(int _x, int _y)
{
	ScreenPrint(_x - 4, _y - 1, "≧旨收旬");
	ScreenPrint(_x - 4, _y, "↖早統早㏑㏑↖↗");
	ScreenPrint(_x - 4, _y + 1, "≧曲收旭");
}
void cDMangchi::MangchiReady(int _x, int _y)
{

	ScreenPrint(_x - 4, _y - 2, "    ↘");
	ScreenPrint(_x - 4, _y - 1, "  旨收旬");
	ScreenPrint(_x - 4, _y, "  早  早");
	ScreenPrint(_x - 4, _y + 1, "  曲收旭");
	ScreenPrint(_x - 4, _y + 2, "    ‵");
	ScreenPrint(_x - 4, _y + 3, "    ‵");
	ScreenPrint(_x - 4, _y + 4, "    ↘");
	ScreenPrint(_x - 4, _y + 5, "    ↙");
}

void cDMangchi::Update(int _nKey)
{
	if (m_IsAttack == 0 )
	{
		m_Index = _nKey - '1';
		m_StartTime = clock();
		m_IsAttack = 1;
	}
}

void cDMangchi::Render()
{
	if (m_IsAttack == 1)
		Mangchi(m_hitX[m_Index], m_hitY[m_Index]);
	else
		MangchiReady(m_StayX, m_StayY);
}
