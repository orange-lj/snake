#pragma once

#include"GameSetting.h"
#include"PrintInfo.h"
#include"Snake.h"
#include"Food.h"

int main() 
{
	PrintInfo pi;
	Snake snake;
	GameSetting::GameInit();
	pi.DrawChoiceInfo();
	char ch = _getch();
	switch (ch) 
	{
	case '1':
		cout << "1" << endl;
		snake.setModel(true);
		break;
	case '2':
		cout << "2" << endl;
		snake.setModel(false);
		break;
	default:
		GameSetting::gotoxy(GameSetting::window_width / 2 - 10, GameSetting::window_height / 2 + 3);
		cout << "输入错误，请重新输入" << endl;
		//cin.get();
		//cin.get();
		break;
	}
	GameSetting::gotoxy(GameSetting::window_width / 2 - 10, GameSetting::window_height / 2 + 3);
	system("pause");
	pi.DrawMap();
	pi.DrawGameInfo(snake.getModel());
	//生成食物
	Food food(snake.m_coordinate);
	//游戏死循环
	while (1) 
	{
		//打印成绩
		pi.DrawScore(snake.getSnakeSize());
		//画出食物
		food.drawFood();
	}
	return 0;
}