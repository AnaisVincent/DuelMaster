#include "StaticTuile.h"

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
