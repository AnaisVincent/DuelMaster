#pragma once
#ifndef __Animation_h__
#define __Animation_h__
#include "Tuile.h"

class Animation {

private:
	int i;

protected:
	int x;
	int y;
	const Tuile* tuile;
	float speed;
	__int64 start;

public:
	Animation(int x, int y, const Tuile* a);
	
	void setSpeed(float speed);
	void sync(__int64 time);
	//void update(__int64 time, Surface* surface);


};


#endif