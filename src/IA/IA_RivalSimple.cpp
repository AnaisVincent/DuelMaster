#include "../IA_headers/IA.hpp"

using namespace IA;

IA_RivalSimple::IA_RivalSimple()
{
}

IA_RivalSimple::~IA_RivalSimple()
{
}

/*void IA_RivalSimple::addComportement(Comportement* behavior)
{
	behaviors.push_back(behavior);
}*/

DirectionCommande* IA_RivalSimple::createDirectionCommande()
{
	if (order == MOVE_RIGHT) {
		return new DirectionCommande(1, Element::EST);
	}
	if (order == MOVE_LEFT) {
		return new DirectionCommande(1, Element::OUEST);
	}
	if (order == MOVE_UP) {
		return new DirectionCommande(1, Element::NORD);
	}
	if (order == MOVE_DOWN) {
		return new DirectionCommande(1, Element::SUD);
	}
}
