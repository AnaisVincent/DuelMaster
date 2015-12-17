#include "../Carte_Etat_headers/Exploration.hpp"
//#include "../Carte_Etat_headers/ElementGrille.h"
//#include "../Carte_Etat_headers/ElementListe.h"

using namespace Exploration;

Etat::Etat()
{
	chars = new ElementListe();
	grid = new ElementGrille();
	map = new Moteur_de_Rendu::Map();
	map->levelMap();
	epoch = 0;
	epochRate = 0;
}

Etat::~Etat()
{
}

void Etat::copy(Etat * other)
{
}

bool const Etat::equals(Etat * other)
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

ElementGrille * const Etat::getGrid()
{
	return grid;
}

ElementListe * const Etat::getChars()
{
	return chars;
}

Moteur_de_Rendu::Map * Etat::getMap()
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

void Etat::setGrid(ElementGrille * grid)
{
	this->grid = grid;
}

void Etat::setChars(ElementListe * list)
{
	this->chars = list;
}

void Etat::loadLevel(char * file_name)
{
}

