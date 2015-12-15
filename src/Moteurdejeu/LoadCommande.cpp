#include "../Moteurdejeu_headers/Moteur_de_Jeu.hpp"

using namespace Moteur_de_Jeu;

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
