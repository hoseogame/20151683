#pragma once

typedef enum _GAME_STATE { INIT, READY, RUNNING, SUCCESS, FAILED, STOP, RESULT } GAME_STATE;
typedef enum _DUDAGI_STATE { SETUP, UP, DOWN } DUDAGI_STATE;

#define BOUNDARY_MIN 2
#define BOUNDARY_MAX 43

typedef struct _STAGE_INFO
{
	int nCatchDudagi;
	clock_t LimitTime;
	clock_t UpLimitTime;
	clock_t DownLimitTime;
} STAGE_INFO;
