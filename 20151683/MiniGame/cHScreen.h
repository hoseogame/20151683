#pragma once
#define CHSCREEN_H



class cHScreen
{
public:
	cHScreen() {};
	virtual ~cHScreen() {};

	// ȭ�� �׸��� �Լ�
	void InitScreen();
	void ReadyScreen();
	void SuccessScreen();
	void RunningScreen();
	void FailureScreen();
	void ResultScreen();
};