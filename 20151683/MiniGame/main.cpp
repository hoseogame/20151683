#include "Game.h"
#include "cHGame.h"
#include "cDGame.h"
#include <iostream>

using namespace std;

int main(void)
{
	
	
	int input = 0;

	cout << "게임을 골라 주세요 1.하트게임 2.두더지게임" << endl;
	cin >> input;

	if (input == 1)
	{
		cHGame HeartGame;
		HeartGame.runGame();
	}
	else if (input == 2)
	{
		cDGame DudagiGame;
		DudagiGame.runGame();
	}

	ScreenRelease();	
	return 0;
}