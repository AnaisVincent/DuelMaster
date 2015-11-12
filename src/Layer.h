#pragma once
#ifndef __Layer_h__
#define __Layer_h__
#include "Surface.h"
#include "Animation.h"
#include "TuileSet.h"
#include <map>



class Layer {

private:
	std::map<int,Animation> animations;

protected:
	Surface* surface;
	const TuileSet* tuileset;

public:
	Layer();
	~Layer();

	const TuileSet* const getTuileSet();
	void setTuileSet(const TuileSet* tuileset);
	void setSurface(const Surface* surface);
	void setAnimation(int i, Animation* a);
	void printText(int x, int y, const char* msg,int spriteIdx, int w, int h);
	void sync(int64_t time);
	void update(int64_t time);

};


#endif
