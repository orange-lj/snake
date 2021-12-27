#pragma once
#include<windows.h>
#include<time.h>		
#include<iostream>
using namespace std;

class GameSetting
{
public:
	//游戏窗口的长宽
	static const int window_height = 40;
	static const int window_width = 80;
public:
	static void GameInit()
	{
		//设置游戏窗口大小
		char buffer[32];
		sprintf_s(buffer, "mode con cols=%d lines=%d", window_width, window_height);
		system(buffer);

		//隐藏光标
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO CursorInfo;
		GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
		CursorInfo.bVisible = false; //隐藏控制台光标
		SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
		//初始化随机数种子
		srand((unsigned int)time(0));
	}
public:
	static void gotoxy(short x, short y) 
	{
		COORD coord = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}
public:
	void setColor(unsigned short ForeColor = 7, unsigned short BackGroundColor = 0) 
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, ForeColor + BackGroundColor * 0x10);
	}
};