#pragma once
#ifndef __TuileSet_h__
#define __TuileSet_h__
#include "Tuile.h"
#include "../Carte_Etat/Element.h"

class TuileSet {

private:

public:
	virtual ~TuileSet();
	virtual int const getCellWidth();
	virtual int const getCellHeight();
	virtual const char* const getImageFile();
	//virtual const Tuile* const getElementTuile(const Element* e);
	//virtual const Tuile* const getCharTuile();
};

#endif
