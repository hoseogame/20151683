#include "cDDudagi.h"

cDDudagi::cDDudagi()
{
	
}
cDDudagi::~cDDudagi()
{

}

void cDDudagi::setPoint(int _x, int _y)
{
	setX(_x);
	setY(_y);
}

void cDDudagi::Render()
{
	if (m_State == UP)
		ScreenPrint(getX(), getY(), "��");

	ScreenPrint(getX(), getY() + 1, "��");
}