#include "Commande.h"

Commande::~Commande()
{
}

int const Commande::getCategory()
{
	return categorie;
}

Commande::CommandeTypeId const Commande::getTypeId()
{
	return type_id;
}
