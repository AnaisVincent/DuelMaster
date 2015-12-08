#pragma once
#include <vector>
#ifndef __Map_h__
#define __Map_h__


class Map
{

protected:
	int w, h;
	std::vector<int> level;

public:
	Map();
	~Map();

	void levelMap();
	void levelDuel();
	std::vector<int> getlevel();
	const int getnumber(int x, int y);
	const int getheight();
	const int getwidth();
};

#endif
