#pragma once
#ifndef __EtatDuel_h__
#define __EtatDuel_h__
#include "Carte.h"
#define NBCARTES 20


class EtatDuel
{
private:
	enum VueListeCartes {PIOCHE, MAIN, TERRAIN, CIMETIERRE};
	int points_combat;
	int points_vie;
	Carte* liste_cartes;
	int tour;
	int compteur_pioche;	

public:
	EtatDuel();
	~EtatDuel();

	void utiliser();

};




#endif