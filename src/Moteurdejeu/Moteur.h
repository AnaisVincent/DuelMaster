#pragma once
#include "CommandeSet.h"
#include "ActionListe.h"
#include "../Carte_Etat/Etat.h"
#include "../Carte_Etat/ElementFabrique.h"
#include "Ruler.h"
#include "../Carte_Etat/ElementListe.h"
#include <SFML/Graphics.hpp>
#ifndef __Moteur_h__
#define __Moteur_h__
//#include <mutex>;

class Moteur
{

public:
	Moteur();
	Moteur(Personnage* perso);
	~Moteur();
	
	
	enum MoteurMode{PLAY, RECORD, REPLAY, ROLLBACK, PAUSE, CLOSE};
	MoteurMode const getMode();
	const Etat* const getState();
	void addCommands(Commande* cmd);
	std::vector<Commande*> takeCommands(CommandeSet* commands);
	//std::mutex& const getUpdateMutex();
	bool update(int64_t time, int64_t* next_time = NULL);
	void swapCommands();
	void setMode(MoteurMode mode);
	void loadLevel(const char* file_name);
	void exec();
	Personnage* getPerso();

protected:
	ElementFabrique* factory;
	Etat currentState;
	//mutable std::mutex commands_mutex;
	//CommandeSet* currentCommands;
	//CommandeSet* waitingCommands;
	CommandeSet* commands;
	ActionListe actions;
	Ruler ruler;
	Personnage* perso;
	//mutable std::mutex update_mutex;
	int64_t lastUpdateTime;

	
	MoteurMode enginemode;
	

};


#endif
