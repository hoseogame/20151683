#pragma once
#define CDDUDAGI_H

#include <time.h>
#include "define.h"

#include "cObject.h"

class cDDudagi : public cObject {
private:
	DUDAGI_STATE m_State; // 두더지 상태
	clock_t m_StayTime; // 들어갔을시 대기시간
	clock_t m_OutPutTime; // 나왔을 시 대기시간
	clock_t m_OldTime; // 이전 시각
	cPoint m_dPoint;	// 좌표
public:
	cDDudagi();
	~cDDudagi();
	void setPoint(int _x, int _y);
	virtual void Render();
	DUDAGI_STATE getState()// 두더지 상태 호출
	{
		return m_State;
	}
	clock_t getStayTime()	// 들어갔을시 대기시간 호출
	{
		return m_StayTime;
	}
	clock_t getOutPutTime()	// 나왔을시 대기시간 호출
	{
		return m_OutPutTime;
	}
	clock_t getOldTime()	// 이전 시각 호출
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
	void setState(DUDAGI_STATE nIState) // 두더지 상태 변환 
	{
		m_State = nIState;
	}
	void setStayTime(clock_t InputStayTime) // 두더지 상태 변환 
	{
		m_StayTime = InputStayTime;
	}
	void setOutPutTime(clock_t InputOutPutTime) // 두더지 상태 변환 
	{
		m_OutPutTime = InputOutPutTime;
	}
	void setOldTime(clock_t InputOldTime) // 두더지 상태 변환 
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