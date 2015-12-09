#pragma once
#ifndef __StatePlan_h__
#define __StatePlan_h__

#include <iostream>
#include "Plan.h"
#include <vector>

class Scene
{
public:
	Scene();
	~Scene();
	int const getWidth();
	int const getHeight();
	int const getPlanCount();
	void setPlan(int idx, Plan* Plan);
	void setSurface(int idx, Surface* surface);
	//void registerObservers(const State::State* s);
	//void unregisterObservers(const State::State* s);
	//void etatChanged(const state StateEvent e);
	void sync(int time);
	void update(int time);

protected:
	int width;
	int height;
	std::vector<Plan*> Plans;

};



#endif
