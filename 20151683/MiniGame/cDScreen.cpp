#include "cDScreen.h"
#include "Screen.h"
void cDScreen::InitScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃                                        ┃");
	ScreenPrint(0, 2, "┃                                        ┃");
	ScreenPrint(0, 3, "┃                                        ┃");
	ScreenPrint(0, 4, "┃                                        ┃");
	ScreenPrint(0, 5, "┃                                        ┃");
	ScreenPrint(0, 6, "┃                                        ┃");
	ScreenPrint(0, 7, "┃                                        ┃");
	ScreenPrint(0, 8, "┃             ////////                   ┃");
	ScreenPrint(0, 9, "┃             ┃＼ /┃ ＼│/             ┃");
	ScreenPrint(0, 10, "┃             ┃··┃┏┳┳┓           ┃");
	ScreenPrint(0, 11, "┃             ┗┓┏┛┗┓┏┛           ┃");
	ScreenPrint(0, 12, "┃                                        ┃");
	ScreenPrint(0, 13, "┃                                        ┃");
	ScreenPrint(0, 14, "┃                                        ┃");
	ScreenPrint(0, 15, "┃             두더지 잡기 게임           ┃");
	ScreenPrint(0, 16, "┃                                        ┃");
	ScreenPrint(0, 17, "┃          space 키를 눌러주세요         ┃");
	ScreenPrint(0, 18, "┃                                        ┃");
	ScreenPrint(0, 19, "┃                                        ┃");
	ScreenPrint(0, 20, "┃                                        ┃");
	ScreenPrint(0, 21, "┃                                        ┃");
	ScreenPrint(0, 22, "┃                                        ┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━┛");
}

void cDScreen::ReadyScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 2, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 3, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 4, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 5, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 6, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 7, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 8, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 9, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 10, "┃■■■■■                    ■■■■■┃");
	ScreenPrint(0, 11, "┃■■■■■        스테이지    ■■■■■┃");
	ScreenPrint(0, 12, "┃■■■■■                    ■■■■■┃");
	ScreenPrint(0, 13, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 14, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 15, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 16, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 17, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 18, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 19, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 20, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 21, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 22, "┃■■■■■■■■■■■■■■■■■■■■┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━┛");
}

void cDScreen::SuccessScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃                                        ┃");
	ScreenPrint(0, 2, "┃                                        ┃");
	ScreenPrint(0, 3, "┃                                        ┃");
	ScreenPrint(0, 4, "┃             // / // ＼＼＼             ┃");
	ScreenPrint(0, 5, "┃             │/＼    /＼│♬           ┃");
	ScreenPrint(0, 6, "┃             │≡  ▽  ≡│○           ┃");
	ScreenPrint(0, 7, "┃              ＼_________///            ┃");
	ScreenPrint(0, 8, "┃                                        ┃");
	ScreenPrint(0, 9, "┃                                        ┃");
	ScreenPrint(0, 10, "┃                                        ┃");
	ScreenPrint(0, 11, "┃                       스테이지         ┃");
	ScreenPrint(0, 12, "┃                                        ┃");
	ScreenPrint(0, 13, "┃                   미션 성공 !!!!       ┃");
	ScreenPrint(0, 14, "┃                                        ┃");
	ScreenPrint(0, 15, "┃                                        ┃");
	ScreenPrint(0, 16, "┃                                        ┃");
	ScreenPrint(0, 17, "┃     잡은 두더지 :                      ┃");
	ScreenPrint(0, 18, "┃                                        ┃");
	ScreenPrint(0, 19, "┃     총점 :                             ┃");
	ScreenPrint(0, 20, "┃                                        ┃");
	ScreenPrint(0, 21, "┃                                        ┃");
	ScreenPrint(0, 22, "┃                                        ┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━┛");
}

void cDScreen::RunningScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃                                        ┃");
	ScreenPrint(0, 2, "┃                                        ┃");
	ScreenPrint(0, 3, "┃                                        ┃");
	ScreenPrint(0, 4, "┃                                        ┃");
	ScreenPrint(0, 5, "┃                                        ┃");
	ScreenPrint(0, 6, "┃                                        ┃");
	ScreenPrint(0, 7, "┃                                        ┃");
	ScreenPrint(0, 8, "┃                                        ┃");
	ScreenPrint(0, 9, "┃                                        ┃");
	ScreenPrint(0, 10, "┃                                        ┃");
	ScreenPrint(0, 11, "┃                                        ┃");
	ScreenPrint(0, 12, "┃                                        ┃");
	ScreenPrint(0, 13, "┃                                        ┃");
	ScreenPrint(0, 14, "┃                                        ┃");
	ScreenPrint(0, 15, "┃                                        ┃");
	ScreenPrint(0, 16, "┃                                        ┃");
	ScreenPrint(0, 17, "┃                                        ┃");
	ScreenPrint(0, 18, "┃                                        ┃");
	ScreenPrint(0, 19, "┃                            ○    ●    ┃");
	ScreenPrint(0, 20, "┃                          ┏■┛┏□┛  ┃");
	ScreenPrint(0, 21, "┃                            ┛┓  ┛┓  ┃");
	ScreenPrint(0, 22, "┃                                        ┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━┛");
}

void cDScreen::FailureScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃                                        ┃");
	ScreenPrint(0, 2, "┃                                        ┃");
	ScreenPrint(0, 3, "┃                                        ┃");
	ScreenPrint(0, 4, "┃                                        ┃");
	ScreenPrint(0, 5, "┃                                        ┃");
	ScreenPrint(0, 6, "┃             ┎-━━-┒                 ┃");
	ScreenPrint(0, 7, "┃             d ご,.ご b                 ┃");
	ScreenPrint(0, 8, "┃             ┃┭─┮┃                 ┃");
	ScreenPrint(0, 9, "┃             ┖┦│┞┚                 ┃");
	ScreenPrint(0, 10, "┃               ┕┷┙                   ┃");
	ScreenPrint(0, 11, "┃                    스테이지            ┃");
	ScreenPrint(0, 12, "┃                                        ┃");
	ScreenPrint(0, 13, "┃            미션 실패 !!!!              ┃");
	ScreenPrint(0, 14, "┃                                        ┃");
	ScreenPrint(0, 15, "┃                                        ┃");
	ScreenPrint(0, 16, "┃                                        ┃");
	ScreenPrint(0, 17, "┃      다시 하시겠습니까? ( y/n )        ┃");
	ScreenPrint(0, 18, "┃                                        ┃");
	ScreenPrint(0, 19, "┃                                        ┃");
	ScreenPrint(0, 20, "┃                                        ┃");
	ScreenPrint(0, 21, "┃                                        ┃");
	ScreenPrint(0, 22, "┃                                        ┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━┛");
}

void cDScreen::ResultScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃                                        ┃");
	ScreenPrint(0, 2, "┃                                        ┃");
	ScreenPrint(0, 3, "┃                                        ┃");
	ScreenPrint(0, 4, "┃                                        ┃");
	ScreenPrint(0, 5, "┃                                        ┃");
	ScreenPrint(0, 6, "┃                                        ┃");
	ScreenPrint(0, 7, "┃  (((    두더지 잡기 게임 Score  ))))   ┃");
	ScreenPrint(0, 8, "┃                                        ┃");
	ScreenPrint(0, 9, "┃                                        ┃");
	ScreenPrint(0, 10, "┃                                        ┃");
	ScreenPrint(0, 11, "┃           총 점수  :                   ┃");
	ScreenPrint(0, 12, "┃                                        ┃");
	ScreenPrint(0, 13, "┃                                        ┃");
	ScreenPrint(0, 14, "┃                                        ┃");
	ScreenPrint(0, 15, "┃                                        ┃");
	ScreenPrint(0, 16, "┃                                        ┃");
	ScreenPrint(0, 17, "┃                                        ┃");
	ScreenPrint(0, 18, "┃                                        ┃");
	ScreenPrint(0, 19, "┃                                        ┃");
	ScreenPrint(0, 20, "┃                                        ┃");
	ScreenPrint(0, 21, "┃                                        ┃");
	ScreenPrint(0, 22, "┃                                        ┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━┛");
}