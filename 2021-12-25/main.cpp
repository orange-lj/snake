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
		cout << "�����������������" << endl;
		//cin.get();
		//cin.get();
		break;
	}
	GameSetting::gotoxy(GameSetting::window_width / 2 - 10, GameSetting::window_height / 2 + 3);
	system("pause");
	pi.DrawMap();
	pi.DrawGameInfo(snake.getModel());
	//����ʳ��
	Food food(snake.m_coordinate);
	//��Ϸ��ѭ��
	while (1) 
	{
		//��ӡ�ɼ�
		pi.DrawScore(snake.getSnakeSize());
		//����ʳ��
		food.drawFood();
	}
	return 0;
}