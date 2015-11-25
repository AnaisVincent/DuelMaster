#pragma once
#include "CommandeSet.h"
#include "ActionListe.h"
#include "Etat.h"
#include "ElementFabrique.h"
#ifndef __Moteur_h__
#define __Moteur_h__
//#include <mutex>;

class Moteur
{

public:
	Moteur();
	~Moteur();
	
	
	enum MoteurMode{PLAY, RECORD, REPLAY, ROLLBACK, PAUSE, CLOSE};
	MoteurMode const getMode();
	const Etat* const getState();
	void addCommands(Commande* cmd);
	void takeCommands(CommandeSet* commands);
	//std::mutex& const getUpdateMutex();
	bool update(int64_t time, int64_t* next_time = NULL);

protected:
	ElementFabrique* factory;
	Etat* currentState;
	//mutable std::mutex commands_mutex;
	CommandeSet* currentCommands;
	CommandeSet* waitingCommands;
	//mutable std::mutex update_mutex;
	int64_t lastUpdateTime;

	void swapCommands();
	void setMode(MoteurMode mode);
	void loadLevel(const char* file_name);
	MoteurMode enginemode;

};


#endif
