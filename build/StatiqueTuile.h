#pragma once
#ifndef __StatiqueTuile_h__
#define __StatiqueTuile_h__
#include "Tuile.h"

class StatiqueTuile : public Tuile
{

protected:
	int x;
	int y;
	int width;
	int height;

public: 
	StatiqueTuile(int x = 0, int y = 0, int width = 24, int height = 24);
	~StatiqueTuile();

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