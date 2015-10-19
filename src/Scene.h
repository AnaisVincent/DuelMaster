#pragma once
#ifndef __StatePlan_h__
#define __StatePlan_h__

class Scene
{
public:
	Scene();
	~Scene();
	int const getWidth();
	int const getHeight();
	int const getLayerCount();
	void setLayer(idx:int, layer:Layer*);
	void setSurface(idx:int, surface:Surface*);
	void registerObservers(s:const State::State*);
	void unregisterObservers(s:const State::State*);
	void etatChanged(e : const state StateEvent);
	void sync(__int64 time);
	void update(__int64 time);

protected:
	int width;
	int height;
	std::vectors<Layer*> layers;

};



#endif
