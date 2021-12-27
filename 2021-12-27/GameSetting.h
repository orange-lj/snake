#pragma once
#include<windows.h>
#include<time.h>		
#include<iostream>
using namespace std;

class GameSetting
{
public:
	//��Ϸ���ڵĳ���
	static const int window_height = 40;
	static const int window_width = 80;
public:
	static void GameInit()
	{
		//������Ϸ���ڴ�С
		char buffer[32];
		sprintf_s(buffer, "mode con cols=%d lines=%d", window_width, window_height);
		system(buffer);

		//���ع��
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO CursorInfo;
		GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
		CursorInfo.bVisible = false; //���ؿ���̨���
		SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
		//��ʼ�����������
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