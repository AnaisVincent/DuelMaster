#include "IA.h"

IA::IA()
{
	moteur = Moteur();
	s = moteur.getState();
}

IA::IA(Moteur moteur)
{
	this->moteur = moteur;
	s = moteur.getState();
}

IA::~IA()
{
}
