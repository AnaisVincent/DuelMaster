#include "Animation.h"

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

void Animation::sync(__int64 time)
{
}

void Animation::update(__int64 time, Surface * surface)
{
}
