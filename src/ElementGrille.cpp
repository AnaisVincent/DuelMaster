#include "ElementGrille.h"
#include "Etat.h"

ElementGrille::ElementGrille() : ElementListe()
{
}

ElementGrille::ElementGrille(Etat * s) : ElementListe(s)
{
	this->s = s;
}

const ElementGrille * ElementGrille::clone()
{
	return nullptr;
}

void ElementGrille::copy(const ElementGrille * other)
{
	ElementListe::copy(other);
	this->width = other->width;
	this->height = other->height;
}

bool const ElementGrille::equals(const ElementGrille * other)
{
	if (ElementListe::equals(other) && other->width == width && other->height == height)
		return true;
	return false;

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

void ElementGrille::isSpace(int i, int j, Element::Direction d)
{
}

void ElementGrille::setCell(int i, int j, Element * e)
{
}

void ElementGrille::load(const char * file_name)
{
}

void const ElementGrille::notifyObservers(int i, int j)
{
	
}

