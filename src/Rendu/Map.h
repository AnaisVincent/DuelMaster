#pragma once
#include <vector>
#ifndef __Map_h__
#define __Map_h__


class Map
{

protected:
	std::vector<int> level;

public:
	Map();
	~Map();

	void levelMap();
	void levelDuel();
	std::vector<int> getlevel();
};

#endif
