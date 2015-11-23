#pragma once
#ifndef __ElementListe_h__
#define __ElementListe_h__
#include "Element.h"
#include "ElementFabrique.h"
#include "Observable.h"
#include <vector>

class Etat;

class ElementListe : public Observable
{
protected:
	Etat *s;
	ElementFabrique* fabrique;
	std::vector<Element*> elements;

public:
	ElementListe();
	ElementListe(Etat *s);
	ElementListe(Etat *s, ElementFabrique* fabrique, std::vector<Element*> elements);
	~ElementListe();

	void Change(int valeur);
	int Statut(void) const;

	const ElementListe clone();
	void copy(const ElementListe *liste);
	bool const equals(const ElementListe *other);
	const Etat* const getEtat();
	int const size();
	Element* const get(int i);
	void clear();
	void setElementFabrique(ElementFabrique* fabrique);
	void set(int i, Element* e);
	void const notifyObservers(int i = -1);
};




#endif
