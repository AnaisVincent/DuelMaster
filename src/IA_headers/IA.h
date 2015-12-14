#pragma once
#include <vector>
#include "../IA_headers/ComportementDeplacement.h"
#include "../Moteurdejeu_headers/DirectionCommande.h"
#include "../Carte_Etat_headers/Etat.h"
#include "../Moteurdejeu_headers/Moteur.h"
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