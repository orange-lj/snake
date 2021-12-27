#pragma once
#include"GameSetting.h"
#include<conio.h>



class PrintInfo
{
public:
	//选择模式
	static void DrawChoiceInfo();
	//画地图边界
	static void DrawMap();
	//游戏结束
	static void GameOver(int score);
	//画分数
	static void DrawScore(int score);
	//画游戏操作说明
	static void DrawGameInfo(bool model);
};

