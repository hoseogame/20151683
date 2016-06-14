#pragma once
#define CHBAR_H

#include "cObject.h"

class cHBar : public cObject
{
private:
	int m_iBarLength;				// 막대기 길이
	int m_iX[7], m_iY;				// 좌표(x가 7개필요하므로 Point 클래스 사용X) 
	clock_t m_MoveTime;				// 이동 시간 간격 
	clock_t m_OldMoveTime;			// 이전 이동 시각
public:
	cHBar();
	virtual ~cHBar() {};
	virtual void Update(int _Key, clock_t _CurTime);
	virtual void Render();
	int getBarLength()
	{
		return m_iBarLength;
	}
	int getX(int _i)
	{
		return m_iX[_i];
	}
	int getY()
	{
		return m_iY;
	}
	clock_t getMoveTime()
	{
		return m_MoveTime;
	}
	clock_t getOldMoveTime()
	{
		return m_OldMoveTime;
	}
	void setBarLength(int _iBarLength)
	{
		m_iBarLength = _iBarLength;
	}
	void setX(int _iX, int _i)
	{
		m_iX[_i] = _iX;
	}
	void setY(int _iY)
	{
		m_iY = _iY;
	}
	void setMoveTime(clock_t _MoveTime)
	{
		m_MoveTime = _MoveTime;
	}
	void setOldMoveTime(clock_t _OldMoveTime)
	{
		m_OldMoveTime = _OldMoveTime;
	}
};