#pragma once
#include "Action.h"
#include "Personnage.h"
#include <SFML/Graphics.hpp>
#ifndef __MoveCharacter_h__
#define __MoveCharacter_h__


class MoveCharacter : public Action

{

protected:
	int idx;
	int dx;
	int dy;
	Personnage* perso;
	//int dpos;
	//etat::Direction prevOrientation;
	//etat::Direction newOrientation;
	//etat::Direction prevDirection;
	//etat::Direction newDirection;

public:
	MoveCharacter();
	MoveCharacter(int idx);
	MoveCharacter(int dx, int dy, Personnage* perso);
	~MoveCharacter();

	int getX();
	int getY();
	int getDX();
	int getDY();

	//void setCoords(int dx, int dy, int dpos);
	//void setOrientation(etat::Direction prev, etat::Direction next);
	//void setDirection(etat::Direction prev, etat::Direction next);
	void apply() override;
	//void undo(etat::Etat& s, bool notify);

};


#endif
