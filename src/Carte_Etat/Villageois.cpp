#include "../Carte_Etat_headers/Exploration.hpp"

using namespace Exploration;

Villageois::Villageois()
{
}

Villageois::Villageois(StatusVillageois typeVillageois)
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

StatusVillageois const Villageois::getTypeVillageois()
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
