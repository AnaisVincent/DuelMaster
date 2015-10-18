#pragma once
#ifndef __StaticTuile_h__
#define __StaticTuile_h__
#include "Tuile.h"

class StaticTuile : public Tuile
{

protected:
	int x;
	int y;
	int width;
	int height;

public: 
	StaticTuile(int x = 0, int y = 0, int width = 24, int height = 24);
	~StaticTuile();

	bool const isAnimated() override;
	int const getX();
	int const getY();
	int const getWidth();
	int const getHeight();
	void setX(int x);
	void setY(int x);
	void setWidth(int x);
	void setHeight(int x);
};

#endif