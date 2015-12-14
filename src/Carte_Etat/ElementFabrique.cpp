#include "../Carte_Etat_headers/ElementFabrique.h"

ElementFabrique::~ElementFabrique()
{
}

Element * const ElementFabrique::newInstance(char id)
{
	return nullptr;
}

void ElementFabrique::registerType(char id, AElementAlloc *)
{
}
