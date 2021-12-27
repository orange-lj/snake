#include "PrintInfo.h"

int speed = 0;

void PrintInfo::DrawChoiceInfo()
{
	system("cls");
	GameSetting::gotoxy(GameSetting::window_width - 65 + 14, 10);
	cout << "请选择游戏模式" ;
	GameSetting::gotoxy(GameSetting::window_width - 65 + 14, 12);
	cout << "1.手动操作模式";
	GameSetting::gotoxy(GameSetting::window_width - 65 + 14, 14);
	cout << "2.AI智能模式";
	GameSetting::gotoxy(GameSetting::window_width - 65 + 14, 16);
	cout << "请输入你的选择: ";
}

void PrintInfo::DrawMap()
{
	system("cls");
	int i, j;
	for (i = 0; i < GameSetting::window_width; i++) 
	{
		cout << "#";
	}
	cout << endl;
	for (i = 0; i < GameSetting::window_height - 2; i++) 
	{
		for (j = 0; j < GameSetting::window_width; j++) 
		{
			if (i == 13 && j >= GameSetting::window_width - 29) 
			{
				cout << "#";
				continue;
			}
			if (j == 0 || j == GameSetting::window_width - 29 || j == GameSetting::window_width - 1)
			{
				cout << "#";
			}
			else 
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (i = 0; i < GameSetting::window_width; i++) 
	{
		cout << "#";
	}
}

void PrintInfo::DrawScore(int score)
{
	GameSetting::gotoxy(GameSetting::window_width - 22 + 14, 6);
	cout << " ";
	GameSetting::gotoxy(GameSetting::window_width - 22 + 14, 4);
	cout << " ";
	GameSetting::gotoxy(GameSetting::window_width - 22, 6);
	cout << "当前玩家分数：" <<score << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 4);
	cout << "当前游戏速度：" <<speed << endl;
}

void PrintInfo::DrawGameInfo(bool model)
{
	GameSetting::gotoxy(GameSetting::window_width - 22, 8);
	if (model)
	{
		cout << "当前游戏模式: " << "人机" << endl;
	}
	else
	{
		cout << "当前游戏模式: " << "AI" << endl;
	}
	GameSetting::gotoxy(GameSetting::window_width - 22, 10);
	cout << "历史最优分数: " << 100 << endl;

	GameSetting::gotoxy(GameSetting::window_width - 22, 18);
	cout << "游戏操作说明：" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 20);
	cout << "W: 上    S: 下" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 22);
	cout << "A: 左    D: 右" << endl;

	GameSetting::gotoxy(GameSetting::window_width - 22, 24);
	cout << "调节游戏速度：" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 26);
	cout << "小键盘 + : 加快" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 28);
	cout << "小键盘 - : 减慢" << endl;

	GameSetting::gotoxy(GameSetting::window_width - 22, 32);
	cout << "作者: infinitor" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 34);
	cout << "版本: 1.0" << endl;
}

