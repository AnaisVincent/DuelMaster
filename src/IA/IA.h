#pragma once
#include <vector>
#include "Comportement.h"
#include "../Moteurdejeu/DirectionCommande.h"
#include "../Carte_Etat/Etat.h"
#include "../Moteurdejeu/Moteur.h"
#ifndef __IA_h__
#define __IA_h__


class IA
{
protected:
	std::vector<Comportement*> behaviors;
	const Etat* s;
	Moteur moteur;

	
public:
	IA();
	IA(Moteur moteur);
	~IA();
	virtual void addComportement(Comportement* behavior) = 0;
	virtual DirectionCommande* createDirectionCommande() = 0;

};

#endif