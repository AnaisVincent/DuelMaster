#pragma once
#ifndef __Plan_h__
#define __Plan_h__
#include "Surface.h"
#include "SurfaceWorld.h"
#include "Animation.h"
#include "TuileSet.h"
#include "TuileSetWorld.h"
#include <SFML\Graphics.hpp>
#include <map>



class Plan {

private:
	std::map<int,Animation> animations;

protected:
	Surface* surface;
	const TuileSet* tuileset;	

public:
	Plan();
	~Plan();

	const TuileSet* const getTuileSet();
	void setTuileSet(const TuileSet* tuileset);
	void setSurface(Surface* surface);
	void setAnimation(int i, Animation* a);
	void printText(int x, int y, const char* msg,int spriteIdx, int w, int h);
	void sync(__int64 time);
	void update(__int64 time);

};


#endif