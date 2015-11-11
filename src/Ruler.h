#pragma once
#include "CommandeSet.h"
#include "ActionListe.h"
#ifndef __Ruler_h__
#define __Ruler_h__

class Ruler
{

protected:
	//const etat::Etat& currentState;
	const CommandeSet& commands;
	ActionListe& actions;

	void moveChar(int idx);
	void resChar(int idx);

public:
	//Ruler(ActionListe& actions, const etat::Etat& s, const CommandeSet& commands);
	~Ruler();

	void collisions();
	void apply();

};


#endif