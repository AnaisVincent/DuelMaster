#include "../Carte_Etat_headers/Exploration.hpp"

using namespace Exploration;

Personnage::Personnage()
{
}

Personnage::Personnage(TypePersonnage typePersonnage)
{
	this->typePersonnage = typePersonnage;
}

Personnage::~Personnage()
{
}

int const Personnage::getTypeId()
{
	return PERSONNAGE; // id personnage = 2;
}

TypePersonnage const Personnage::getTypePersonnage()
{
	return typePersonnage;
}

bool const Personnage::isPersonnage()
{
	if (getTypePersonnage() == 0)
	return true;
	else return false;
}

void Personnage::clone()
{
}
