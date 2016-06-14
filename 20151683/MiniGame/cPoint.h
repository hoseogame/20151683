#pragma once
#define CPOINT_H

class cPoint {
private:
	int m_x, m_y;
public:
	cPoint() {};
	cPoint(int _x, int _y)
	{
		m_x = _x;
		m_y = _y;
	}
	void setPointX(int _x) 
	{
		m_x = _x;
	}
	void setPointY(int _y)
	{
		m_y = _y;
	}
	int getPointX()
	{
		return m_x;
	}
	int getPointY()
	{
		return m_y;
	}
};