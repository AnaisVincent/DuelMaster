#include "Personnage.h"

Personnage::Personnage()
{
}

Personnage::Personnage(enumPersonnage typePersonnage)
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

Personnage::enumPersonnage const Personnage::getTypePersonnage()
{
	return typePersonnage;
}

bool const Personnage::isPersonnage()
{
	if (getTypePersonnage == 0)
	return true;
}

void Personnage::clone()
{
}
