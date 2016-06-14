#pragma once
#define CHSCREEN_H



class cHScreen
{
public:
	cHScreen() {};
	virtual ~cHScreen() {};

	// 화면 그리기 함수
	void InitScreen();
	void ReadyScreen();
	void SuccessScreen();
	void RunningScreen();
	void FailureScreen();
	void ResultScreen();
};