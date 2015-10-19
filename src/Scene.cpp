#include "Scene.h"

Scene::Scene() {}

Scene::~Scene() {}

int const Scene::getWidth()
{
	return width;
}

int const Scene::getHeight()
{
	return height;
}

int const Scene::getLayerCount()
{
	return layers;
}

void Scene::setLayer(idx : int, layer : Layer *)
{
}

void Scene::setSurface(idx : int, surface : Surface *)
{
}

void Scene::registerObservers(s : const State::State *)
{
}

void Scene::unregisterObservers(s : const State::State *)
{
}

void Scene::etatChanged(e : const state StateEvent)
{
}

void Scene::sync(__int64 time)
{
}

void Scene::update(__int64 time)
{
}
