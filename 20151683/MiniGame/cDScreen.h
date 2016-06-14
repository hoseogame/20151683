#pragma once
#define CDSCREEN_H


class cDScreen {
public:
	cDScreen() {};
	~cDScreen() {};
	void InitScreen();
	void ReadyScreen();
	void SuccessScreen();
	void RunningScreen();
	void FailureScreen();
	void ResultScreen();
};