#pragma once
#ifndef __AnimeeTuile_h__
#define __AnimeeTuile_h__
#include "Tuile.h"

class AnimeeTuile : public Tuile
{

protected:
	Tuile* tuiles;
	float rate;

public:
	AnimeeTuile(float rate = 10);
	~AnimeeTuile();

	bool const isAnimated() override;
	float const getRate();
	int const getTuileCount();
	const Tuile* const getTuile(int i);
	void setRate(float rate);
	void setY(int x);
	void addTuile(Tuile* tuile);
	void setTuile(int i, Tuile* tuile);
};

#endif