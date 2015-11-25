#include "Obstacle.h"

Obstacle::Obstacle(){}

Obstacle::Obstacle(enumObstacle typeObstacle)
{
	this->typeObstacle = typeObstacle;
}

Obstacle::~Obstacle(){}

int const Obstacle::getTypeId()
{
	//id du type Obstacle : 4
	return OBSTACLE;
}

Obstacle::enumObstacle const Obstacle::getTypeObstacle()
{
	return typeObstacle;
}


bool const Obstacle::isSpace()
{
	return false;
}

void Obstacle::clone()
{
}
