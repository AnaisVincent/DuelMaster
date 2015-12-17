#include "../Carte_Etat_headers/Exploration.hpp"

using namespace Exploration;

Obstacle::Obstacle(){}


Obstacle::~Obstacle(){}

int const Obstacle::getTypeId()
{
	//id du type Obstacle : 4
	return OBSTACLE;
}


bool const Obstacle::isSpace()
{
	return false;
}

void Obstacle::clone()
{
}
