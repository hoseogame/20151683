#pragma once
#define CHSTAGEINFO_H

#include <time.h>
#include "cHStage.h"

class cHStageInfo
{
private:
	int m_nStageCount;
	cHStage m_cHStage[2];
public:
	cHStageInfo();
	int getStageCount()
	{
		return m_nStageCount;
	}
	int getBasketX(int _i)
	{
		return m_cHStage[_i].getBasketX();
	}
	int getBasketY(int _i)
	{
		return m_cHStage[_i].getBasketY();
	}
	int getHeartCount(int _i)
	{
		return m_cHStage[_i].getHeartCount();
	}
	int getGoalHeartCount(int _i)
	{
		return m_cHStage[_i].getGoalHeartCount();
	}
	int getBarLength(int _i)
	{
		return m_cHStage[_i].getBarLength();
	}
	clock_t getBasketMoveTime(int _i)
	{
		return m_cHStage[_i].getBasketMoveTime();
	}
	clock_t getBasketDownHeartTime(int _i)
	{
		return m_cHStage[_i].getBasketDownHeartTime();
	}
	void setBasketX(int _i,int _iBasketX)
	{
		m_cHStage[_i].setBasketX(_iBasketX);
	}
	void setBasketY(int _i,int _iBasketY)
	{
		m_cHStage[_i].setBasketY(_iBasketY);
	}
	void setHeartCount(int _i,int _iHeartCount)
	{
		m_cHStage[_i].setHeartCount(_iHeartCount);
	}
	void setGoalHeartCount(int _i,int _iGoalHeartCount)
	{
		m_cHStage[_i].setGoalHeartCount(_iGoalHeartCount);
	}
	void setBarLength(int _i,int _iBarLength)
	{
		m_cHStage[_i].setBarLength(_iBarLength);
	}
	void setBasketMoveTime(int _i, clock_t _BasketMoveTime)
	{
		m_cHStage[_i].setBasketMoveTime(_BasketMoveTime);
	}
	void setBasketDownHeartTime(int _i, clock_t _BasketDownHeartTime)
	{
		m_cHStage[_i].setBasketDownHeartTime(_BasketDownHeartTime);
	}
	void setStageCount(int _nStageCount)
	{
		m_nStageCount = _nStageCount;
	}
};