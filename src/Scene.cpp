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

int const Scene::getPlanCount()
{
	return 0;
}

void Scene::setPlan(int idx, Plan * Plan)
{
}

void Scene::setSurface(int idx, Surface * surface)
{
}

void Scene::sync(__int64 time)
{
}

void Scene::update(__int64 time)
{
}

