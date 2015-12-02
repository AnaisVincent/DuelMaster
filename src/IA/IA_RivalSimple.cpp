#include "IA_RivalSimple.h"

IA_RivalSimple::IA_RivalSimple()
{
}

IA_RivalSimple::~IA_RivalSimple()
{
}

void IA_RivalSimple::addComportement(Comportement* behavior)
{
	behaviors.push_back(behavior);
}

DirectionCommande* IA_RivalSimple::createDirectionCommande()
{

}
