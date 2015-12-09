#pragma once
#include <vector>
#include "Action.h"
#include "MoveCharacter.h"
#include <iostream>

#ifndef __ActionListe_h__
#define __ActionListe_h__

#define LISTEMAX 1024

class ActionListe
{

protected:
	//etat::Etat& s;
	bool permission[LISTEMAX];
	int nombre_actions;
	Action* actions[LISTEMAX];
	
public:
	ActionListe();
	//ActionListe(etat::Etat& s, bool notify);
	~ActionListe();

	int const size();
	Action* const get(int i);
	bool getPermission(int i);
	void apply();
	void setPermission(int i, bool boolean);
	void undo();
	void add(Action* action);
	void remove(int i);
	void addApply(Action* action);

};


#endif
