#include "ModeCommande.h"

ModeCommande::ModeCommande(Moteur::MoteurMode mode)
{
}

int const ModeCommande::getCategory()
{
	return categorie;
}

Commande::CommandeTypeId const ModeCommande::getTypeId()
{
	return type_id;
}

Moteur::MoteurMode const ModeCommande::getMode()
{
	return mode;
}
