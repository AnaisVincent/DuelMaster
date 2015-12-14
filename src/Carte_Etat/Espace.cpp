#include "../Carte_Etat_headers/Espace.h"

Espace::Espace(){}

Espace::Espace(enumEspace typeEspace)
{
	this->typeespace = typeEspace;
}

Espace::~Espace(){}

int const Espace::getTypeId()
{
	//id du type Espace : 3
	return ESPACE;
}

Espace::enumEspace const Espace::getTypeEspace()
{
	return typeespace;
}


bool const Espace::isSpace()
{
	return true;
}

void Espace::clone()
{
}
