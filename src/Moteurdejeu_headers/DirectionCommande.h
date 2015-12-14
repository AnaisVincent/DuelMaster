#pragma once
#include "Commande.h"
#include "../Carte_Etat_headers/Element.h"
#ifndef __DirectionCommande_h__
#define __DirectionCommande_h__

class DirectionCommande : public Commande
{

protected:
	int character;
	Element::Direction direction;

public:
	DirectionCommande(int c, Element::Direction d);

	virtual int const getCategory() override;
	virtual CommandeTypeId const getTypeId() override;
	int const getCharacter();
	Element::Direction const getDirection();

};


#endif
