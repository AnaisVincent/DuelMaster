#pragma once
#include "ElementFabrique.h"
#include "../Rendu_headers/Map.h"
#ifndef __Etat_h__
#define __Etat_h__

class ElementListe;
class ElementGrille;

class Etat
{

protected:
	const ElementListe* chars;
	const ElementGrille* grid;
	Map* map;
	int epoch;
	float epochRate;

public:
	Etat();
	~Etat();

	//Etat const clone();
	void copy(const Etat* other);
	bool const equals(const Etat* other);
	int const getEpoch();
	float const getEpochRate();
	const ElementGrille* const getGrid();
	const ElementListe* const getChars();
	Map* getMap();
	//const MobileElement* const getChar(int idx);
	void setElementFactory(ElementFabrique* f);
	void setEpoch(int time);
	void setEpochRate(float rate);
	void setGrid(const ElementGrille* grid);
	void setChars(const ElementListe* list);
	void loadLevel(const char* file_name);
	//void const notifyObservers(EtatEventId id);
	//void const notifyObservers(const EtatEvent* e);

};

#endif
