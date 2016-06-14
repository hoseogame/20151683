#pragma once
#define CHSTAGE_H

#include <time.h>

class cHStage
{
private:
	int m_iBasketX;						// Note: ��Ʈ �ٱ����� x ��ǥ
	int m_iBasketY;						// Note: ��Ʈ �ٱ����� y ��ǥ	
	int m_iHeartCount;					// Note: Stage�� �� ��Ʈ ��
	int m_iGoalHeartCount;				// Note: ��ǥ ��Ʈ ��
	int m_iBarLength;					// Note: ��������
	clock_t m_BasketMoveTime;			// Note: ��Ʈ �ٱ��ϰ� �����̴� �̵� �ð� ����
	clock_t m_BasketDownHeartTime;		// Note: ��Ʈ�� �������� �ð� ����
public:
	cHStage() {};
	int getBasketX()
	{
		return m_iBasketX;
	}
	int getBasketY()
	{
		return m_iBasketY;
	}
	int getHeartCount()
	{
		return m_iHeartCount;
	}
	int getGoalHeartCount()
	{
		return m_iGoalHeartCount;
	}
	int getBarLength()
	{
		return m_iBarLength;
	}
	clock_t getBasketMoveTime()
	{
		return m_BasketMoveTime;
	}
	clock_t getBasketDownHeartTime()
	{
		return m_BasketDownHeartTime;
	}
	void setBasketX(int _iBasketX)
	{
		m_iBasketX = _iBasketX;
	}
	void setBasketY(int _iBasketY)
	{
		m_iBasketY = _iBasketY;
	}
	void setHeartCount(int _iHeartCount)
	{
		m_iHeartCount = _iHeartCount;
	}
	void setGoalHeartCount(int _iGoalHeartCount)
	{
		m_iGoalHeartCount = _iGoalHeartCount;
	}
	void setBarLength(int _iBarLength)
	{
		m_iBarLength = _iBarLength;
	}
	void setBasketMoveTime(clock_t _BasketMoveTime)
	{
		m_BasketMoveTime = _BasketMoveTime;
	}
	void setBasketDownHeartTime(clock_t _BasketDownHeartTime)
	{
		m_BasketDownHeartTime = _BasketDownHeartTime;
	}
};