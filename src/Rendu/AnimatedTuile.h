#pragma once
#ifndef __AnimatedTuile_h__
#define __AnimatedTuile_h__
#include "Tuile.h"

class AnimatedTuile : public Tuile
{

protected:
	Tuile* tuiles;
	float rate;

public:
	AnimatedTuile(float rate = 10);
	~AnimatedTuile();

	bool const isAnimated() override;
	float const getRate();
	int const getTuileCount();
	const Tuile* const getTuile(int i);
	void setRate(float rate);
	void addTuile(Tuile* tuile);
	void setTuile(int i, Tuile* tuile);
};

#endif