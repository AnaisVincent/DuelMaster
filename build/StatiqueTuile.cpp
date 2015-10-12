#include "StatiqueTuile.h"

StatiqueTuile::StatiqueTuile(int x, int y, int width, int height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

StatiqueTuile::~StatiqueTuile(){}

bool const StatiqueTuile::isAnimated()
{
	return false;
}

int const StatiqueTuile::getX()
{
	return x;
}

int const StatiqueTuile::getY()
{
	return y;
}

int const StatiqueTuile::getWidth()
{
	return width;
}

int const StatiqueTuile::getHeight()
{
	return height;
}

void StatiqueTuile::setX(int x)
{
	this->x = x;
}

void StatiqueTuile::setY(int y)
{
	this->y = y;
}

void StatiqueTuile::setWidth(int width)
{
	this->width = width;
}

void StatiqueTuile::setHeight(int height)
{
	this->height = height;
}
