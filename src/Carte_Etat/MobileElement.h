#pragma once
#include "Element.h"
#ifndef __MobileElement_h__
#define __MobileElement_h__


class MobileElement : public Element
{

protected:
	int speed;
	int position;
	Direction direction; //1:Nord, 2:Sud, 3:Est, 4:Ouest
	//Carte[NB_CARTES] deck;

public:
	MobileElement();
	~MobileElement();

	bool const isStatic() override;
	virtual bool const isPersonnage() = 0;
	int const getSpeed();
	int const getPosition();
	Direction const getDirection();
	//int getCarte(int i);
	void setSpeed(int s);
	void setPosition(int p);
	void setDirection(Direction dir);


};





#endif