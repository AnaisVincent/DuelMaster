#pragma once
#include "Element.h"
#include "ElementListe.h"
#ifndef __ElementGrille_h__
#define __ElementGrille_h__

class Etat;

class ElementGrille : public ElementListe
{

protected:
	int width;
	int height;

public:
	ElementGrille();
	ElementGrille(Etat* s);

	const ElementGrille* clone();
	void copy(const ElementGrille* other);
	bool const equals(const ElementGrille* other);
	bool const hasCell(int i, int j);
	int const getWidth();
	int const getHeight();
	Element* const getCell(int i, int j);
	void isSpace(int i, int j, Element::Direction d);
	void setCell(int i, int j, Element* e);
	void load(const char* file_name);
	void const notifyObservers(int i=-1, int j=-1);

};

#endif
