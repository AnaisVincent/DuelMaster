#include "../Rendu_headers/Animation.h"

Animation::Animation(int x, int y, const Tuile * a)
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
