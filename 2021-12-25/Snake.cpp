#include "Snake.h"

int Snake::getSnakeSize()
{
	return m_coordinate.size();
}

void Snake::setModel(bool m)
{
	m_model = m;
}

bool Snake::getModel()
{
	return this->m_model;
}
