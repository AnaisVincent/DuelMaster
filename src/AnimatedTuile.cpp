#include "AnimatedTuile.h"

AnimatedTuile::AnimatedTuile(float rate)
{
	this->rate = rate;
}

AnimatedTuile::~AnimatedTuile(){}

bool const AnimatedTuile::isAnimated()
{
	return true;
}

float const AnimatedTuile::getRate()
{
	return rate;
}

int const AnimatedTuile::getTuileCount()
{
	int i = 0;
	while (this->tuiles + i != nullptr) {
		
	}
	return 0;
}

const Tuile* const AnimatedTuile::getTuile(int i)
{
	return (this->tuiles + i);
}

void AnimatedTuile::setRate(float rate)
{
	this->rate = rate;
}

void AnimatedTuile::addTuile(Tuile * tuile)
{
	Tuile* buf;
	buf = this->tuiles + 1;
	buf = tuile;
}

void AnimatedTuile::setTuile(int i, Tuile * tuile)
{
	//this->tuiles + i = tuile;
}


