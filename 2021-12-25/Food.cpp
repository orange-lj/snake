#include "Food.h"

Food::Food(vector<COORDINATE> coord)
{
	RandomXY(coord);
}

void Food::RandomXY(vector<COORDINATE> coord)
{
	m_coordinate.x = rand() % (GameSetting::window_width - 30) + 1;
	m_coordinate.y = rand() % (GameSetting::window_height - 2) + 1;
	unsigned int i;
	for (i = 0; i < coord.size(); i++) 
	{
		if (coord[i].x == m_coordinate.x || coord[i].y == m_coordinate.y) 
		{
			m_coordinate.x = rand() % (GameSetting::window_width - 30) + 1;
			m_coordinate.y = rand() % (GameSetting::window_height - 2) + 1;
			i = 0;
		}
	}
}

void Food::drawFood()
{
	GameSetting g;
	g.setColor(12, 0);
	GameSetting::gotoxy(m_coordinate.x, m_coordinate.y);
	cout << "@";
	g.setColor(7, 0);
}
