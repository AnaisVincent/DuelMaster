#include "Etat.h"
#include "ElementGrille.h"
#include "ElementListe.h"

Etat::Etat()
{
	chars;
	grid;
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

void Etat::setElementFactory(ElementFabrique * f)
{
}

void Etat::setEpoch(int time)
{
}

void Etat::setEpochRate(float rate)
{
}

void Etat::setGrid(const ElementGrille * grid)
{
}

void Etat::setChars(const ElementListe * list)
{
}

void Etat::loadLevel(const char * file_name)
{
}

