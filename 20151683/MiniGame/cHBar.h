#pragma once
#define CHBAR_H

#include "cObject.h"

class cHBar : public cObject
{
private:
	int m_iBarLength;				// ����� ����
	int m_iX[7], m_iY;				// ��ǥ(x�� 7���ʿ��ϹǷ� Point Ŭ���� ���X) 
	clock_t m_MoveTime;				// �̵� �ð� ���� 
	clock_t m_OldMoveTime;			// ���� �̵� �ð�
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