#pragma once
#define CHSTAGE_H

#include <time.h>

class cHStage
{
private:
	int m_iBasketX;						// Note: 하트 바구니의 x 좌표
	int m_iBasketY;						// Note: 하트 바구니의 y 좌표	
	int m_iHeartCount;					// Note: Stage별 총 하트 수
	int m_iGoalHeartCount;				// Note: 목표 하트 수
	int m_iBarLength;					// Note: 막대기길이
	clock_t m_BasketMoveTime;			// Note: 하트 바구니가 움직이는 이동 시간 간격
	clock_t m_BasketDownHeartTime;		// Note: 하트가 떨어지는 시간 간격
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