#pragma once
#define CHBASKET_H

#include "cObject.h"

class cHBasket : public cObject
{
private:
	int m_iDist;					// 이동거리
	clock_t m_MoveTime;				// 이동 시간 간격 
	clock_t m_OldMoveTime;			// 이전 이동 시각
	clock_t m_OldDownHeartTime;
	clock_t m_DownHeartTime;
	cPoint m_hPoint;
public:
	cHBasket();
	cHBasket(int _BasketX, int _BasketY) :m_hPoint(_BasketX, _BasketY) {};
	virtual ~cHBasket() {};
	virtual void Update(clock_t _CurTime);
	virtual void Render();

	int getX()
	{
		return m_hPoint.getPointX();
	}
	int getY()
	{
		return m_hPoint.getPointY();
	}
	int getDist()
	{
		return m_iDist;
	}
	clock_t getMoveTime()
	{
		return m_MoveTime;
	}
	clock_t getOldMoveTime()
	{
		return m_OldMoveTime;
	}
	clock_t getOldDownHeartTime()
	{
		return m_OldDownHeartTime;
	}
	clock_t getDownHeartTime()
	{
		return m_DownHeartTime;
	}
	
	void setX(int _x)
	{
		m_hPoint.setPointX(_x);
	}
	void setY(int _y)
	{
		m_hPoint.setPointY(_y);
	}
	void setDist(int _iDist)
	{
		m_iDist = _iDist;
	}
	void setMoveTime(clock_t _MoveTime)
	{
		m_MoveTime = _MoveTime;
	}
	void setOldMoveTime(clock_t _OldMoveTime)
	{
		m_OldMoveTime = _OldMoveTime;
	}
	void setOldDownHeartTime(clock_t _OldDownHeartTime)
	{
		m_OldDownHeartTime = _OldDownHeartTime;
	}
	void setDownHeartTime(clock_t _DownHeartTime)
	{
		m_DownHeartTime = _DownHeartTime;
	}
};