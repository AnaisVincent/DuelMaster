#pragma once
#include "../Moteurdejeu_headers/CommandeSet.h"
#include "../Moteurdejeu_headers/ActionListe.h"
#include "../Carte_Etat_headers/Etat.h"
#ifndef __Ruler_h__
#define __Ruler_h__

class Ruler
{

protected:
	Etat* currentState;
	CommandeSet* commands;
	ActionListe* actions;
	int w;
	int h;

	void moveChar(int idx);
	void resChar(int idx);

public:
	Ruler();
	Ruler(int width, int height);
	Ruler(ActionListe* actions, Etat* s, CommandeSet* commands);
	~Ruler();
	
	bool collisions(int x, int y);
	void apply();

};


#endif