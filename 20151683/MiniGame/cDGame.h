#pragma once
#define CDGAME_H

#include <time.h>
#include "Game.h"
#include "define.h"
#include "cDDudagi.h"
#include "cDMangchi.h"
#include "cDScreen.h"
#include <stdlib.h>
#include <conio.h>

class cDGame : public Game {
private:
	int m_nStage; // 스테이지 수
	int m_Grade; // 점수
	int m_nDudagiCount; // 잡은 두더지수
	int m_nTotalGrade; // 총점
	clock_t m_GameStartTime;
	clock_t m_UpdateOldTime;
	clock_t m_RemainTime;
	GAME_STATE m_GameState; // 게임상태
	cDDudagi	m_Dudagi[9];
	cDMangchi m_Mangchi;
	cDScreen m_Screen;
	STAGE_INFO m_StageInfo[3];

	void InitGame();
	
	void updateGame(int _nKey);
	void renderGame();	// 변수 호출시 사용함수

public:
	cDGame();
	virtual ~cDGame();
	void runGame();
	int getStage()
	{
		return m_nStage;
	}
	int getGrade()
	{
		return m_Grade;
	}
	clock_t getGameStartTime()
	{
		return m_GameStartTime;
	}
	clock_t getUpdateOldTime()
	{
		return m_UpdateOldTime;
	}
	clock_t getRemainTime()
	{
		return m_RemainTime;
	}
	GAME_STATE getGameState()
	{
		return m_GameState;
	}
	
	// 변수 수정시 사용하는 함수
	void setStage(int input)
	{
		m_nStage = input;
	}
	void setGrade(int input)
	{
		m_Grade = input;
	}
	void setGameStartTime(clock_t input)
	{
		m_GameStartTime = input;
	}
	void setUpdateOldTime(clock_t input)
	{
		m_UpdateOldTime = input;
	}
	void setRemainTime(clock_t input)
	{
		m_RemainTime = input;
	}
	void setGameState(GAME_STATE input)
	{
		m_GameState = input;
	}
	void setStageInfo(STAGE_INFO *m_StageInfo);
	
};