#pragma once
#include"GameSetting.h"
#include<conio.h>



class PrintInfo
{
public:
	//ѡ��ģʽ
	static void DrawChoiceInfo();
	//����ͼ�߽�
	static void DrawMap();
	//��Ϸ����
	static void GameOver(int score);
	//������
	static void DrawScore(int score);
	//����Ϸ����˵��
	static void DrawGameInfo(bool model);
};

