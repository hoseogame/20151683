#pragma once
#define CHHEART_H

#include "cObject.h"

class cHHeart : public cObject
{
private:
	int m_iLife;					// ����
	int m_iDist;					// �̵��Ÿ�
	clock_t m_MoveTime;				// �̵� �ð� ���� 
	clock_t m_OldMoveTime;			// ���� �̵� �ð�
	cPoint m_hPoint;
public:
	cHHeart();
	cHHeart(int _HeartX, int _HeartY):m_hPoint(_HeartX, _HeartY) {};
	virtual ~cHHeart() {};
	void Update(int _BasketX, int _BasketY, clock_t _CurTime);
	virtual void Render();
	int getX()
	{
		return m_hPoint.getPointX();
	}
	int getY()
	{
		return m_hPoint.getPointY();
	}
	int getLife()
	{
		return m_iLife;
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
	void setX(int _x)
	{
		m_hPoint.setPointX(_x);
	}
	void setY(int _y)
	{
		m_hPoint.setPointY(_y);
	}
	void setLife(int _iLife)
	{
		 m_iLife = _iLife;
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
};