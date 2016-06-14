#pragma once
#define CDMANGCHI_H

#include <time.h>
#include "define.h"
#include "cObject.h"


class cDMangchi : public cObject {
private:
	int	m_IsAttack;         // ��ġ ���� 
	int	m_Index;            // ��ǥ �迭�� �����ϱ� ���� �ε���
	int m_hitX[9];			// Ÿ�� X ��ǥ
	int m_hitY[9];			// Ÿ�� Y ��ǥ
	int	m_StayX, m_StayY;    // ��� ������ �� ��ǥ	
	clock_t	m_StartTime;     // Ÿ�� ���°� ���۵� �ð�
	clock_t	m_DelayTime;     // Ÿ�� ������ ���� �ð�
public:
	cDMangchi();
	~cDMangchi();
	// ��ġ �׷��� ��ºκ�
	void Mangchi(int _x, int _y);
	void MangchiReady(int _x, int _y);
	void Update(int _nKey);
	virtual void Render();
	// ���� ȣ��� ����Լ�
	int getIsAttack()
	{
		return m_IsAttack;
	}
	int getIndex()
	{
		return m_Index;
	}
	int getStayX()
	{
		return m_StayX;
	}
	int getStayY()
	{
		return m_StayY;
	}
	clock_t getStartTime()
	{
		return m_StartTime;
	}
	clock_t getDelayTime()
	{
		return m_DelayTime;
	}
	// ������ ������ ��� �Լ�
	void setIsAttack(int input)
	{
		m_IsAttack = input;
	}
	void setIndex(int input)
	{
		m_Index = input;
	}
	void setStayX(int input)
	{
		m_StayX = input;
	}
	void setStayY(int input)
	{
		m_StayY = input;
	}
	void setStartTime(clock_t inputTime)
	{
		m_StartTime = inputTime;
	}
	void setDelayTime(clock_t inputTime)
	{
		m_DelayTime = inputTime;
	}
};