#include "../Carte_Etat_headers/Exploration.hpp"

using namespace Exploration;

MobileElement::MobileElement()
{
}

MobileElement::~MobileElement()
{
}

bool const MobileElement::isStatic()
{
	return false;
}

int const MobileElement::getSpeed()
{
	return speed;
}

int const MobileElement::getPosition()
{
	return position;
}

Element::Direction const MobileElement::getDirection()
{
	return direction;
}

void MobileElement::setSpeed(int s)
{
	this->speed = s;
}

void MobileElement::setPosition(int p)
{
	this->position = p;
}

void MobileElement::setDirection(Direction dir)
{
	this->direction = dir;
}
