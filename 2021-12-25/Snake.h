#pragma once
#include<vector>
#include"FindPathBFS.h"
using namespace std;

class Snake 
{
private:
	bool m_model;
public:
	vector<COORDINATE> m_coordinate;
public:
	int getSnakeSize();
	void setModel(bool m);
	bool getModel();
};