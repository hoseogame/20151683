#include "cHStageInfo.h"
#include <fstream>

using namespace std;

cHStageInfo::cHStageInfo()
{
	int i;
	ifstream fin; // 파일 입력 스트림 객체 fin 생성

	fin.open("stage.txt");
	fin >> m_nStageCount;

	for (i = 0; i < m_nStageCount; i++)
	{
		int itmp;
		fin >> itmp;
		m_cHStage[i].setBasketMoveTime(itmp);
		fin >> itmp;
		m_cHStage[i].setBasketDownHeartTime(itmp);
		fin >> itmp;
		m_cHStage[i].setBasketX(itmp);
		fin >> itmp;
		m_cHStage[i].setBasketY(itmp);
		fin >> itmp;
		m_cHStage[i].setHeartCount(itmp);
		fin >> itmp;
		m_cHStage[i].setGoalHeartCount(itmp);
		fin >> itmp;
		m_cHStage[i].setBarLength(itmp);
	}

	fin.close();
}