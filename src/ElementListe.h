#pragma once
#ifndef __ElementListe_h__
#define __ElementListe_h__
#include "Etat.h"
#include "Element.h"
#include "ElementFabrique.h"
#include <vector>



class ElementListe
{
protected:
	Etat s;
	ElementFabrique* fabrique;
	std::vector<Element> elements;

public:
	ElementListe(Etat &s);
	~ElementListe();

	const ElementListe clone();
	void copy(const ElementListe &liste);
	bool const equals(const ElementListe &other);
	const Etat* const getEtat();
	int const size();
	Element* const get(int i);
	void clear();
	void setElementFabrique(ElementFabrique* fabrique);
	void set(int i, Element* e);
	void const notifyObservers(int i = -1);
};




#endif
