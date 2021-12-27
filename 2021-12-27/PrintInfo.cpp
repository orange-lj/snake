#include "PrintInfo.h"

int speed = 0;

void PrintInfo::DrawChoiceInfo()
{
	system("cls");
	GameSetting::gotoxy(GameSetting::window_width - 65 + 14, 10);
	cout << "��ѡ����Ϸģʽ" ;
	GameSetting::gotoxy(GameSetting::window_width - 65 + 14, 12);
	cout << "1.�ֶ�����ģʽ";
	GameSetting::gotoxy(GameSetting::window_width - 65 + 14, 14);
	cout << "2.AI����ģʽ";
	GameSetting::gotoxy(GameSetting::window_width - 65 + 14, 16);
	cout << "���������ѡ��: ";
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
	cout << "��ǰ��ҷ�����" <<score << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 4);
	cout << "��ǰ��Ϸ�ٶȣ�" <<speed << endl;
}

void PrintInfo::DrawGameInfo(bool model)
{
	GameSetting::gotoxy(GameSetting::window_width - 22, 8);
	if (model)
	{
		cout << "��ǰ��Ϸģʽ: " << "�˻�" << endl;
	}
	else
	{
		cout << "��ǰ��Ϸģʽ: " << "AI" << endl;
	}
	GameSetting::gotoxy(GameSetting::window_width - 22, 10);
	cout << "��ʷ���ŷ���: " << 100 << endl;

	GameSetting::gotoxy(GameSetting::window_width - 22, 18);
	cout << "��Ϸ����˵����" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 20);
	cout << "W: ��    S: ��" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 22);
	cout << "A: ��    D: ��" << endl;

	GameSetting::gotoxy(GameSetting::window_width - 22, 24);
	cout << "������Ϸ�ٶȣ�" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 26);
	cout << "С���� + : �ӿ�" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 28);
	cout << "С���� - : ����" << endl;

	GameSetting::gotoxy(GameSetting::window_width - 22, 32);
	cout << "����: infinitor" << endl;
	GameSetting::gotoxy(GameSetting::window_width - 22, 34);
	cout << "�汾: 1.0" << endl;
}

