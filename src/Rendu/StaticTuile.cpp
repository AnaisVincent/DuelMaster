#include "../Rendu_headers/Moteur_de_Rendu.hpp"

using namespace Moteur_de_Rendu;

Moteur_de_Rendu::StaticTuile::StaticTuile()
{
	x = 0;
	y = 0;
	width = 32;
	height = 32;
}

StaticTuile::StaticTuile(int x, int y, int width, int height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

StaticTuile::~StaticTuile(){}

bool const StaticTuile::isAnimated()
{
	return false;
}

int const StaticTuile::getX()
{
	return x;
}

int const StaticTuile::getY()
{
	return y;
}

int const StaticTuile::getWidth()
{
	return width;
}

int const StaticTuile::getHeight()
{
	return height;
}

void StaticTuile::setX(int x)
{
	this->x = x;
}

void StaticTuile::setY(int y)
{
	this->y = y;
}

void StaticTuile::setWidth(int width)
{
	this->width = width;
}

void StaticTuile::setHeight(int height)
{
	this->height = height;
}
