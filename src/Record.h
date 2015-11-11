#pragma once
#include "ActionListe.h"
#ifndef __Record_h__
#define __Record_h__
#include <vector>

class Record
{

protected:
	//etat::Etat* mainState;
	//etat::Etat* initState;
	//etat::Etat* lastState;
	std::vector<ActionListe*> actions;
	int idx;

public:
	//Record(etat::Etat& s);
	~Record();

	void clear();
	void startRecord();
	void recordOne(ActionListe* actions);
	void stopRecord();
	void startReplay();
	bool replayOne();
	void startRollBack();
	bool rollBackOne();

};


#endif