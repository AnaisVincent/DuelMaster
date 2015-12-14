#include "../Carte_Etat_headers/ElementAlloc.h"

ElementAlloc::ElementAlloc(char id)
{
	this->id = id;
}

Element * ElementAlloc::newInstance(char id)
{
	return nullptr;
}
