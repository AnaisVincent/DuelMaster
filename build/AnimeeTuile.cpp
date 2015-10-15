#include "AnimeeTuile.h"

AnimeeTuile::AnimeeTuile(float rate)
{
	this->rate = rate;
}

AnimeeTuile::~AnimeeTuile(){}

bool const AnimeeTuile::isAnimated()
{
	return true;
}

float const AnimeeTuile::getRate()
{
	return rate;
}

int const AnimeeTuile::getTuileCount()
{
	return 0;
}

const Tuile* const AnimeeTuile::getTuile(int i)
{
	return (this->tuiles + i);
}

void AnimeeTuile::setRate(float rate)
{
	this->rate = rate;
}

void AnimeeTuile::addTuile(Tuile * tuile)
{
	Tuile* buf;
	buf = this->tuiles + 1;
	buf = tuile;
}

void AnimeeTuile::setTuile(int i, Tuile * tuile)
{
	//this->tuiles + i = tuile;
}


