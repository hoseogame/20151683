#include "cHScreen.h"
#include "Screen.h"

void cHScreen::RunningScreen()
{
	ScreenPrint(0, 1, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 2, "┃〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓┃");
	ScreenPrint(0, 3, "┃                                          ┃");
	ScreenPrint(0, 4, "┃                                          ┃");
	ScreenPrint(0, 5, "┃                                          ┃");
	ScreenPrint(0, 6, "┃                                          ┃");
	ScreenPrint(0, 7, "┃                                          ┃");
	ScreenPrint(0, 8, "┃                                          ┃");
	ScreenPrint(0, 9, "┃                                          ┃");
	ScreenPrint(0, 10, "┃                                          ┃");
	ScreenPrint(0, 11, "┃                                          ┃");
	ScreenPrint(0, 12, "┃                                          ┃");
	ScreenPrint(0, 13, "┃                                          ┃");
	ScreenPrint(0, 14, "┃                                          ┃");
	ScreenPrint(0, 15, "┃                                          ┃");
	ScreenPrint(0, 16, "┃                                          ┃");
	ScreenPrint(0, 17, "┃                                          ┃");
	ScreenPrint(0, 18, "┃                                          ┃");
	ScreenPrint(0, 19, "┃                                          ┃");
	ScreenPrint(0, 20, "┃                                          ┃");
	ScreenPrint(0, 21, "┃                                          ┃");
	ScreenPrint(0, 22, "┃                                          ┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void cHScreen::InitScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃                                          ┃");
	ScreenPrint(0, 2, "┃                                          ┃");
	ScreenPrint(0, 3, "┃                                          ┃");
	ScreenPrint(0, 4, "┃                   하트 담기 게임         ┃");
	ScreenPrint(0, 5, "┃                                          ┃");
	ScreenPrint(0, 6, "┃     ┏●┓                               ┃");
	ScreenPrint(0, 7, "┃        ♡                                ┃");
	ScreenPrint(0, 8, "┃          ♡                              ┃");
	ScreenPrint(0, 9, "┃            ♡♡                          ┃");
	ScreenPrint(0, 10, "┃              ♡ ♡                       ┃");
	ScreenPrint(0, 11, "┃               ♡                         ┃");
	ScreenPrint(0, 12, "┃          ♡                              ┃");
	ScreenPrint(0, 13, "┃                         ♡               ┃");
	ScreenPrint(0, 14, "┃      ♡♡  ♡♡        ♡                ┃");
	ScreenPrint(0, 15, "┃       ♡♡♡♡♡♡♡  ♡    ♡           ┃");
	ScreenPrint(0, 16, "┃        ♡♡♡♡♡♡   ♡                 ┃");
	ScreenPrint(0, 17, "┃         ♡♡♡♡♡                       ┃");
	ScreenPrint(0, 18, "┃          ♡♡♡    space 를 눌러 주세요  ┃");
	ScreenPrint(0, 19, "┃            ♡                            ┃");
	ScreenPrint(0, 20, "┃          ┗○┛                          ┃");
	ScreenPrint(0, 21, "┃                                          ┃");
	ScreenPrint(0, 22, "┃                                          ┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");

}

void cHScreen::ReadyScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 2, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 3, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 4, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 5, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 6, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 7, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 8, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 9, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 10, "┃♡♡♡♡♡                    ♡♡♡♡♡♡┃");
	ScreenPrint(0, 11, "┃♡♡♡♡♡          스테이지  ♡♡♡♡♡♡┃");
	ScreenPrint(0, 12, "┃♡♡♡♡♡                    ♡♡♡♡♡♡┃");
	ScreenPrint(0, 13, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 14, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 15, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 16, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 17, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 18, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 19, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 20, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 21, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 22, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void cHScreen::SuccessScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 2, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 3, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 4, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 5, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 6, "┃♡♡♡♡♡                    ♡♡♡♡♡♡┃");
	ScreenPrint(0, 7, "┃♡♡♡♡♡          스테이지  ♡♡♡♡♡♡┃");
	ScreenPrint(0, 8, "┃♡♡♡♡♡                    ♡♡♡♡♡♡┃");
	ScreenPrint(0, 9, "┃♡♡♡♡♡    미션 성공 !!!   ♡♡♡♡♡♡┃");
	ScreenPrint(0, 10, "┃♡♡♡♡♡                    ♡♡♡♡♡♡┃");
	ScreenPrint(0, 11, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 12, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 13, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 14, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 15, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 16, "┃♡♡♡♡♡♡♡            ♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 17, "┃♡♡♡♡♡♡♡            ♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 18, "┃♡♡♡♡♡♡♡            ♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 19, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 20, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 21, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 22, "┃♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void cHScreen::FailureScreen()
{
	ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 1, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 2, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 3, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 4, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 5, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 6, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 7, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 8, "┃♨♨♨♨♨                      ♨♨♨♨♨┃");
	ScreenPrint(0, 9, "┃♨♨♨♨♨           스테이지   ♨♨♨♨♨┃");
	ScreenPrint(0, 10, "┃♨♨♨♨♨                      ♨♨♨♨♨┃");
	ScreenPrint(0, 11, "┃♨♨♨♨♨    미션 실패 !!!!    ♨♨♨♨♨┃");
	ScreenPrint(0, 12, "┃♨♨♨♨♨                      ♨♨♨♨♨┃");
	ScreenPrint(0, 13, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 14, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 15, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 16, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 17, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 18, "┃♨♨♨♨                          ♨♨♨♨┃");
	ScreenPrint(0, 19, "┃♨♨♨♨ 계속 하시겠습니까? (y/n) ♨♨♨♨┃");
	ScreenPrint(0, 20, "┃♨♨♨♨                          ♨♨♨♨┃");
	ScreenPrint(0, 21, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 22, "┃♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨♨┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void cHScreen::ResultScreen()
{
	ScreenPrint(0, 1, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	ScreenPrint(0, 2, "┃                                          ┃");
	ScreenPrint(0, 3, "┃                                          ┃");
	ScreenPrint(0, 4, "┃         ((((    결과 보기    ))))        ┃");
	ScreenPrint(0, 5, "┃                                          ┃");
	ScreenPrint(0, 6, "┃               ┏●┓                     ┃");
	ScreenPrint(0, 7, "┃                   ♡                     ┃");
	ScreenPrint(0, 8, "┃                                          ┃");
	ScreenPrint(0, 9, "┃                                ♡        ┃");
	ScreenPrint(0, 10, "┃                                          ┃");
	ScreenPrint(0, 11, "┃         총점 :             ♡ ♡         ┃");
	ScreenPrint(0, 12, "┃                               ♡         ┃");
	ScreenPrint(0, 13, "┃                               ♡         ┃");
	ScreenPrint(0, 14, "┃                              ♡          ┃");
	ScreenPrint(0, 15, "┃                 ♡♡  ♡♡        ♡     ┃");
	ScreenPrint(0, 16, "┃               ♡♡♡♡♡♡♡  ♡    ♡   ┃");
	ScreenPrint(0, 17, "┃                ♡♡♡♡♡♡   ♡         ┃");
	ScreenPrint(0, 18, "┃                 ♡♡♡♡♡               ┃");
	ScreenPrint(0, 19, "┃                   ♡♡♡                 ┃");
	ScreenPrint(0, 20, "┃                     ♡                   ┃");
	ScreenPrint(0, 21, "┃                    ┗○┛                ┃");
	ScreenPrint(0, 22, "┃                                          ┃");
	ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}
