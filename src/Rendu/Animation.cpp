#include "../Rendu_headers/Moteur_de_Rendu.hpp"

using namespace Moteur_de_Rendu;

Animation::Animation(int x, int y, Tuile * a)
{
	this->x = x;
	this->y = y;
	tuile = a;
}

void Animation::setSpeed(float speed)
{
	this->speed = speed;
}

void Animation::sync(int time)
{
}

void Animation::update(int time, Surface * surface)
{
}
