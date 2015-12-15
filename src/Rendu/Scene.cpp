#include "../Rendu_headers/Moteur_de_Rendu.hpp"

using namespace Moteur_de_Rendu;

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

void Scene::sync(int time)
{
}

void Scene::update(int time)
{
}

