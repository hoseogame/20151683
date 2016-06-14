#pragma once
#define CDGAME_H

class Game
{
public:
	virtual void runGame() {};
	virtual void updateGame(int nKey) {};
	virtual void renderGame() {};
	virtual void initGame() {};
};