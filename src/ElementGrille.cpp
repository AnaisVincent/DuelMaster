#include "ElementGrille.h"

ElementGrille::ElementGrille(Etat & s) : ElementListe(s)
{
	this->s = s;
}

void ElementGrille::copy(const ElementGrille & other)
{
}

bool const ElementGrille::equals(const ElementGrille & other)
{
	return nullptr;
}

bool const ElementGrille::hasCell(int i, int j)
{
	return nullptr;
}

int const ElementGrille::getWidth()
{
	return width;
}

int const ElementGrille::getHeight()
{
	return height;
}

Element * const ElementGrille::getCell(int i, int j)
{
	return nullptr;
}

void ElementGrille::setCell(int i, int j, Element * e)
{
}

void ElementGrille::load(const char * file_name)
{
}

