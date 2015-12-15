#include "../Carte_Etat_headers/Exploration.hpp"

using namespace Exploration;

ElementAlloc::ElementAlloc(char id)
{
	this->id = id;
}

Element * ElementAlloc::newInstance(char id)
{
	return nullptr;
}
