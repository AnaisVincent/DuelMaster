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

Moteur_de_Jeu::DirectionCommande* IA_RivalSimple::createDirectionCommande()
{
	if (order == MOVE_RIGHT) {
		return new Moteur_de_Jeu::DirectionCommande(1, Exploration::EST);
	}
	if (order == MOVE_LEFT) {
		return new Moteur_de_Jeu::DirectionCommande(1, Exploration::OUEST);
	}
	if (order == MOVE_UP) {
		return new Moteur_de_Jeu::DirectionCommande(1, Exploration::NORD);
	}
	if (order == MOVE_DOWN) {
		return new Moteur_de_Jeu::DirectionCommande(1, Exploration::SUD);
	}
	else return nullptr;
}
