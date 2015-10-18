#include "StaticElement.h"

StaticElement::StaticElement(){}

StaticElement::~StaticElement(){}

int const StaticElement::getX()
{
	return x;
}

int const StaticElement::getY()
{
	return y;
}


void StaticElement::setX(int x)
{
	this->x = x;
}

void StaticElement::setY(int y)
{
	this->y = y;
}