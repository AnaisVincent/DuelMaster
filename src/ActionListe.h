#pragma once
#include <vector>
#include "Action.h"
#ifndef __ActionListe_h__
#define __ActionListe_h__

class ActionListe
{

protected:
	//etat::Etat& s;
	bool notify;
	std::vector<Action*> actions;

public:
	//ActionListe(etat::Etat& s, bool notify);
	~ActionListe();

	int const size();
	Action* const get(int i);
	void apply();
	void undo();
	void add(Action* action);
	void addApply(Action* action);

};


#endif
