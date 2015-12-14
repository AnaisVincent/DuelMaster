#pragma once
#ifndef __Animation_h__
#define __Animation_h__
#include "Tuile.h"
#include "Surface.h"

class Animation {

private:
	int i;

protected:
	int x;
	int y;
	const Tuile* tuile;
	float speed;
	int start;

public:
	Animation(int x, int y, const Tuile* a);
	
	void setSpeed(float speed);
	void sync(int time);
	void update(int time, Surface* surface);


};


#endif
