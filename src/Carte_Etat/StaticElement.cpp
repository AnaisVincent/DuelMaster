#include "../Carte_Etat_headers/Exploration.hpp"

using namespace Exploration;

StaticElement::StaticElement(){}

StaticElement::~StaticElement(){}

/*int const StaticElement::getTypeId()
{
	return 0;
}*/

bool const StaticElement::isStatic()
{
	return true;
}

/*bool const StaticElement::isSpace()
{
	return 0;
}

void StaticElement::clone()
{
}*/
