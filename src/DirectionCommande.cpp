#include "DirectionCommande.h"

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
