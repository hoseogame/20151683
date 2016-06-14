#pragma once
#define CHGAME_H

#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "define.h"
#include "cObject.h"
#include "cHScreen.h"
#include "cHBasket.h"
#include "cHBar.h"
#include "cHHeart.h"
#include "cHStageInfo.h"
#include "Game.h"

class cHGame : public Game
{
private:
	GAME_STATE	m_GameState;
	int			m_iStage;
	int			m_iGrade; // Á¡¼ö 
	int			m_iTotalGrade; // ÃÑÁ¡
	int			m_iHeartDownCount;
	int			m_iHeartCount; // È¹µæÇÑ ÇÏÆ® °³¼ö
	int			m_iDeadHeartCount;	// Á×Àº ÇÏÆ® °³¼ö
	bool		m_isGameRunning;
	clock_t		m_GameStartTime;
	clock_t		m_UpdateOldTime;
	clock_t		m_RemainTime;
	cHScreen	m_Screen;
	cHStageInfo m_StageInfo;
	cHHeart		m_Heart[100];
	cHBasket	m_Basket;
	cHBar		m_Bar;
	void updateGame(int nKey);
	void renderGame();
	void initGame();
public:
	cHGame();
	~cHGame() {};
	void runGame();
	
};