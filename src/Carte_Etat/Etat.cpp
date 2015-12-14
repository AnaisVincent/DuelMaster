#include "../Carte_Etat_headers/Etat.h"
#include "../Carte_Etat_headers/ElementGrille.h"
#include "../Carte_Etat_headers/ElementListe.h"

Etat::Etat()
{
	chars = new ElementListe();
	grid = new ElementGrille();
	map = new Map();
	map->levelMap();
	epoch = 0;
	epochRate = 0;
}

Etat::~Etat()
{
}

void Etat::copy(const Etat * other)
{
}

bool const Etat::equals(const Etat * other)
{
	return nullptr;
}

int const Etat::getEpoch()
{
	return epoch;
}

float const Etat::getEpochRate()
{
	return epochRate;
}

const ElementGrille * const Etat::getGrid()
{
	return grid;
}

const ElementListe * const Etat::getChars()
{
	return chars;
}

Map * Etat::getMap()
{
	return map;
}

void Etat::setElementFactory(ElementFabrique * f)
{
}

void Etat::setEpoch(int time)
{
	this->epoch = time;
}

void Etat::setEpochRate(float rate)
{
	this->epochRate = rate;
}

void Etat::setGrid(const ElementGrille * grid)
{
	this->grid = grid;
}

void Etat::setChars(const ElementListe * list)
{
	this->chars = list;
}

void Etat::loadLevel(const char * file_name)
{
}

