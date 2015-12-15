#include "../Moteurdejeu_headers/Moteur_de_Jeu.hpp"

using namespace Moteur_de_Jeu;

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
