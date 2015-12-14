#include "../Moteurdejeu_headers/DirectionCommande.h"

DirectionCommande::DirectionCommande(int c, Element::Direction d)
{
	this->character = c;
	this->direction = d;
	type_id = DIRECTION;
	categorie = MOVE_CATEGORY;
}

int const DirectionCommande::getCategory()
{
	return categorie;
}

Commande::CommandeTypeId const DirectionCommande::getTypeId()
{
	return type_id;
}

int const DirectionCommande::getCharacter()
{
	return character;
}

Element::Direction const DirectionCommande::getDirection()
{
	return direction;
}
