#pragma once
#include "Action.h"
#ifndef __MoveCharacter_h__
#define __MoveCharacter_h__

class MoveCharacter : public Action

{

protected:
	int idx;
	int dx;
	int dy;
	int dpos;
	//etat::Direction prevOrientation;
	//etat::Direction newOrientation;
	//etat::Direction prevDirection;
	//etat::Direction newDirection;

public:
	MoveCharacter(int idx);
	~MoveCharacter();


	void setCoords(int dx, int dy, int dpos);
	//void setOrientation(etat::Direction prev, etat::Direction next);
	//void setDirection(etat::Direction prev, etat::Direction next);
	//void apply(etat::Etat& s,bool notify);
	//void undo(etat::Etat& s, bool notify);

};


#endif