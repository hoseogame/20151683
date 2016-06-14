#pragma once
#define CDMANGCHI_H

#include <time.h>
#include "define.h"
#include "cObject.h"


class cDMangchi : public cObject {
private:
	int	m_IsAttack;         // 망치 상태 
	int	m_Index;            // 좌표 배열에 접근하기 위한 인덱스
	int m_hitX[9];			// 타격 X 좌표
	int m_hitY[9];			// 타격 Y 좌표
	int	m_StayX, m_StayY;    // 대기 상태일 때 좌표	
	clock_t	m_StartTime;     // 타격 상태가 시작된 시각
	clock_t	m_DelayTime;     // 타격 상태의 지연 시각
public:
	cDMangchi();
	~cDMangchi();
	// 망치 그래픽 출력부분
	void Mangchi(int _x, int _y);
	void MangchiReady(int _x, int _y);
	void Update(int _nKey);
	virtual void Render();
	// 변수 호출시 사용함수
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
	// 변수값 수정시 사용 함수
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