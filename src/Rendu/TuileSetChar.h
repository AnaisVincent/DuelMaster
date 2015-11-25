#pragma once
#ifndef __TuileSetChar_h__
#define __TuileSetChar_h__
#include <SFML/Graphics.hpp>
#include <iostream>
#include "TuileSet.h"
#include "Tuile.h"
#include "StaticTuile.h"
#include "AnimatedTuile.h"
#include "../Carte_Etat/Element.h"

class TuileSetChar : public TuileSet {

private:
	Tuile* tuiles;
	const char* const image_file = "../../res/ExplorationPart/Sprites/PrPrincipal.png";
public:

	TuileSetChar();
	~TuileSetChar();
	int const getCellWidth() override;
	int const getCellHeight() override;
	const char* const getImageFile();
	const Tuile* const getElementTuile(const Element* e);
	const Tuile* const getCharTuile(char c);
};

#endif
