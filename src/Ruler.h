#pragma once
#include "CommandeSet.h"
#include "ActionListe.h"
#include "Etat.h"
#ifndef __Ruler_h__
#define __Ruler_h__

class Ruler
{

protected:
	const Etat* currentState;
	const CommandeSet* commands;
	ActionListe* actions;
	int w;
	int h;

	void moveChar(int idx);
	void resChar(int idx);

public:
	Ruler(int width, int height);
	Ruler(ActionListe* actions, const Etat* s, const CommandeSet* commands);
	~Ruler();
	
	bool collisions(int dx, int dy, int numdir, const int* level);
	void apply();

};


#endif