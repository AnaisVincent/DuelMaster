#pragma once
#ifndef __Surface_h__
#define __Surface_h__
#include "StaticTuile.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Surface {

private:
    sf::Texture tuileset;

public:
	virtual ~Surface();
	virtual void clear();
	virtual sf::Texture getTexture();
	virtual void loadTexture(const char* image_file);
	virtual void setSpriteCount(int n);
	virtual void setSpriteLocation(int i, int x, int y);
	virtual void setSpriteTexture(int i, const StaticTuile tex);
};

#endif