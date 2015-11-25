#include "LoadCommande.h"

LoadCommande::LoadCommande(const char * f)
{
}

int const LoadCommande::getCategory()
{
	return categorie;
}

Commande::CommandeTypeId const LoadCommande::getTypeId()
{
	return type_id;
}

std::string LoadCommande::getFileName()
{
	return file_name;
}
