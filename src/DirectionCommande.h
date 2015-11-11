#pragma once
#include "Commande.h"
#ifndef __DirectionCommande_h__
#define __DirectionCommande_h__

class DirectionCommande : public Commande
{

protected:
	int character;
	//etat::Direction direction;

public:
	//DirectionCommande(int c, etat::Direction d);

	virtual int const getCategory() override;
	virtual CommandeTypeId const getTypeId() override;
	int const getCharacter();
	//etat::Direction const getDirection();

};


#endif
