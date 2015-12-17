#include "../IA_headers/IA.hpp"
#include "../Moteurdejeu_headers/Moteur_de_Jeu.hpp"

using namespace IA;

IA_classe::IA_classe()
{
	moteur = Moteur_de_Jeu::Moteur();
	s = moteur.getState();
}

IA_classe::IA_classe(Moteur_de_Jeu::Moteur moteur)
{
	this->moteur = moteur;
	s = moteur.getState();
}

IA_classe::~IA_classe()
{
}
