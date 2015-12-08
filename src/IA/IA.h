#pragma once
#include <vector>
#include "ComportementDeplacement.h"
#include "../Moteurdejeu/DirectionCommande.h"
#include "../Carte_Etat/Etat.h"
#include "../Moteurdejeu/Moteur.h"
#ifndef __IA_h__
#define __IA_h__


class IA
{
protected:
	enum OrderType {IDLE, MOVE_UP, MOVE_DOWN, MOVE_LEFT, MOVE_RIGHT, ATTACK};
	ComportementDeplacement move_behavior;
	const Etat* s;
	Moteur moteur;
	OrderType order;

	
public:
	IA();
	IA(Moteur moteur);
	~IA();
	//virtual void addComportement(Comportement* behavior) = 0;
	virtual DirectionCommande* createDirectionCommande() = 0;

};

#endif