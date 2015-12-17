#include "../Rendu_headers/Moteur_de_Rendu.hpp"

using namespace Moteur_de_Rendu;

Plan::Plan() {}

Plan::~Plan() {}

const TuileSet * const Plan::getTuileSet()
{
	return this->tuileset;
}

void Plan::setTuileSet(TuileSet * tuileset)
{
	this->tuileset = tuileset;
}

void Plan::setSurface(Surface * surface)
{
	this->surface = surface;
}

void Plan::setAnimation(int i, Animation * a)
{
}

void Plan::printText(int x, int y, char * msg, int spriteIdx, int w, int h)
{
	
}

void Plan::sync(int time)
{
}

void Plan::update(int time)
{
}

