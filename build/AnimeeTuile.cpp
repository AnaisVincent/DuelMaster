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

void AnimeeTuile::setRate(float rate)
{
	this->rate = rate;
}
