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
	int m_nStage; // �������� ��
	int m_Grade; // ����
	int m_nDudagiCount; // ���� �δ�����
	int m_nTotalGrade; // ����
	clock_t m_GameStartTime;
	clock_t m_UpdateOldTime;
	clock_t m_RemainTime;
	GAME_STATE m_GameState; // ���ӻ���
	cDDudagi	m_Dudagi[9];
	cDMangchi m_Mangchi;
	cDScreen m_Screen;
	STAGE_INFO m_StageInfo[3];

	void InitGame();
	
	void updateGame(int _nKey);
	void renderGame();	// ���� ȣ��� ����Լ�

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
	
	// ���� ������ ����ϴ� �Լ�
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