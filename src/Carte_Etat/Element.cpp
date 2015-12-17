#include "../Carte_Etat_headers/Exploration.hpp"

using namespace Exploration;

Element::Element()
{
}

Element::~Element()
{
}

/*int const Element::getTypeId()
{
	return 0;
}

bool const Element::isStatic()
{
	return 0;
}

void Element::clone()
{
}*/

int const Element::getX()
{
	return x;
}

int const Element::getY()
{
	return y;
}

Exploration::Direction const Element::getOrientation()
{
	return orientation;
}


void Element::setX(int x)
{
	this->x = x;
}

void Element::setY(int y)
{
	this->y = y;
}

void Element::setOrientation(Direction dir)
{
	orientation = dir;
}


