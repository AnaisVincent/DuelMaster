#pragma once
#ifndef __SurfaceWorld_h__
#define __SurfaceWorld_h__
#include "StaticTuile.h"
#include "Surface.h"
#include "TuileSet.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class SurfaceWorld : public Surface, public sf::Drawable, public sf::Transformable{

private:
   	sf::Texture texture;
	sf::VertexArray vertices;
	sf::Vertex* quad;
	int spriteCount;
	int arrayWidth;

public:
	SurfaceWorld();
	~SurfaceWorld();
	void clear();
	void loadTexture(const char* image_file);
	void setArrayWidth(int w);
	void setSprite(StaticTuile tex, const int* tuiles);
	void setSpriteCount(int n);
	void setSpriteLocation(int i, int x, int y);
	void setSpriteTexture(int i, const StaticTuile tex);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif
