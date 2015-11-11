#pragma once
#ifndef __Etat_h__
#define __Etat_h__

class Etat
{

protected:
	//ElementListe chars;
	//ElementGrille grid;
	int epoch;
	float epochRate;

public:
	Etat();
	~Etat();

	//Etat const clone();
	void copy(const Etat& other);
	bool const equals(const Etat& other);
	int const getEpoch();
	float const getEpochRate();
	//const ElementGrille& const getGrid();
	//const ElementListe& const getChars();
	//const MobileElement* const getChar(int idx);
	//void setElementFactory(ElementFactory* f);
	void setEpoch(int time);
	void setEpochRate(float rate);
	//void setGrid(const ElementGrille& grid);
	//void setChars(const ElementListe& list);
	void loadLevel(const char* file_name);
	//void const notifyObservers(EtatEventId id);
	//void const notifyObservers(const EtatEvent& e);

};

#endif
