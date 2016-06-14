#pragma once
#define CDDUDAGI_H

#include <time.h>
#include "define.h"

#include "cObject.h"

class cDDudagi : public cObject {
private:
	DUDAGI_STATE m_State; // �δ��� ����
	clock_t m_StayTime; // ������ ���ð�
	clock_t m_OutPutTime; // ������ �� ���ð�
	clock_t m_OldTime; // ���� �ð�
	cPoint m_dPoint;	// ��ǥ
public:
	cDDudagi();
	~cDDudagi();
	void setPoint(int _x, int _y);
	virtual void Render();
	DUDAGI_STATE getState()// �δ��� ���� ȣ��
	{
		return m_State;
	}
	clock_t getStayTime()	// ������ ���ð� ȣ��
	{
		return m_StayTime;
	}
	clock_t getOutPutTime()	// �������� ���ð� ȣ��
	{
		return m_OutPutTime;
	}
	clock_t getOldTime()	// ���� �ð� ȣ��
	{
		return m_OldTime;
	}
	int getX()
	{
		return m_dPoint.getPointX();
	}
	int getY()
	{
		return m_dPoint.getPointY();
	}
	void setState(DUDAGI_STATE nIState) // �δ��� ���� ��ȯ 
	{
		m_State = nIState;
	}
	void setStayTime(clock_t InputStayTime) // �δ��� ���� ��ȯ 
	{
		m_StayTime = InputStayTime;
	}
	void setOutPutTime(clock_t InputOutPutTime) // �δ��� ���� ��ȯ 
	{
		m_OutPutTime = InputOutPutTime;
	}
	void setOldTime(clock_t InputOldTime) // �δ��� ���� ��ȯ 
	{
		m_OldTime = InputOldTime;
	}
	void setX(int _x)
	{
		m_dPoint.setPointX(_x);
	}
	void setY(int _y)
	{
		m_dPoint.setPointY(_y);
	}
};