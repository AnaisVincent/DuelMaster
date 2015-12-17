#include "../Moteurdejeu_headers/Moteur_de_Jeu.hpp"

using namespace Moteur_de_Jeu;

DirectionCommande::DirectionCommande(int c, Exploration::Direction d)
{
	this->character = c;
	this->direction = d;
	type_id = DIRECTION;
	categorie = MOVE_CATEGORY;
}

int const DirectionCommande::getCategorie()
{
	return categorie;
}

CommandeTypeId const DirectionCommande::getTypeId()
{
	return type_id;
}

int const DirectionCommande::getCharacter()
{
	return character;
}

Exploration::Direction const DirectionCommande::getDirection()
{
	return direction;
}
