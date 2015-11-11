#pragma once
#include "StaticElement.h"
#ifndef __Obstacle_h__
#define __Obstacle_h__


class Obstacle : public StaticElement
{
public: enum enumObstacle { EAU, MAISON, BUISSON };

private:
	enumObstacle typeObstacle; // 1 = eau ; 2 = maison ; 3 = buisson


public:
	Obstacle();
	Obstacle(enumObstacle);
	~Obstacle();

	int const getTypeId() override;
	enumObstacle const getTypeObstacle();
	bool const isSpace() override;
	void clone() override;

};





#endif