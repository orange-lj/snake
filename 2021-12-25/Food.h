#pragma once
#include<vector>
#include"FindPathBFS.h"
#include"GameSetting.h"
using namespace std;
class Food
{
private:
	//ʳ������
	COORDINATE m_coordinate;
public:
	Food(vector<COORDINATE> coord);
	void RandomXY(vector<COORDINATE> coord);
	void drawFood();
};

