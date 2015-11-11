#include "Villageois.h"

Villageois::Villageois()
{
}

Villageois::Villageois(enumVillageois typeVillageois)
{
	this->typeVillageois = typeVillageois;
}

Villageois::~Villageois()
{
}

int const Villageois::getTypeId()
{
	return VILLAGEOIS; // id Villageois = 1;
}

Villageois::enumVillageois const Villageois::getTypeVillageois()
{
	return typeVillageois;
}

bool const Villageois::isPersonnage()
{
	return false;
}

void Villageois::clone()
{
}
