#pragma once
#ifndef __Plan_h__
#define __Plan_h__
#include "Surface.h"
#include "SurfaceWorld.h"
#include "Animation.h"
#include "TuileSet.h"
#include "TuileSetWorld.h"
#include "TuileSetChar.h"
#include <SFML/Graphics.hpp>
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
	void sync(int time);
	void update(int time);

};


#endif
