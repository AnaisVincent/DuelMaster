#pragma once
#ifndef __Surface_h__
#define __Surface_h__
#include "StaticTuile.h"

class Surface {

private:


public:
	virtual ~Surface();
	virtual void clear();
	virtual void loadTexture(const char*);
	virtual void setSpriteCount(int n);
	virtual void setSpriteLocation(int i, int x, int y);
	virtual void setSpriteTexture(int i, const StaticTuile tex);
};

#endif