#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "Plan.h"

int main()
{
	int w = 32;
	int h = 16;
	int dimTuile = 32;
	// on crée la fenêtre
	sf::RenderWindow window(sf::VideoMode(w * dimTuile, h * dimTuile), "Tilemap");

	/*std::ifstream fin("../res/ExplorationPart/map.txt");
	std::cout << "hello" << std::endl;
	if(!fin.good()) {
		throw std::runtime_error("Cannot open file");
	}
	char* level;
	while (true) {
		char tmp[0x1000];
		int i = 0;
		fin.getline(tmp, 0x1000);
		if (fin.eof()) {
			break;
		}
		if (!fin.good()) {
			throw std::runtime_error("Cannot read file");
		}
		std::cout << tmp;
		if (i = 0) {level = tmp; }
		else { strcat(level, tmp); }
		i++;
	}
	std::cout << level;
	*/

	// on définition du niveau
	const int level[] =
	{
		21, 21, 21, 21, 21, 1, 1, 21, 1, 1, 1, 1, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		21, 21, 21, 41, 1, 1, 1, 21, 21, 1, 21, 1, 21, 21, 21, 21, 21, 21, 21, 21, 1, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		21, 21, 1, 41, 1, 1, 1, 21, 21, 21, 21, 1, 21, 21, 21, 21, 21, 21, 41, 41, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21, 21,
		21, 1, 1, 41, 21, 1, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 41, 41, 21, 21, 21, 21, 21, 41, 41, 41, 41, 21, 21, 21, 21,
		1, 21, 21, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21, 21, 41, 41, 41, 21, 21, 21, 21, 21, 21, 1, 21, 21, 1, 21, 21, 21, 21,
		21, 21, 21, 1, 21, 21, 21, 41, 41, 41, 41, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 1, 21, 1, 21, 21,
		1, 1, 21, 21, 21, 21, 21, 41, 21, 21, 21, 21, 21, 21, 21, 41, 41, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		1, 21, 21, 21, 21, 21, 21, 41, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 25, 21, 41, 21, 1, 1, 21, 21, 21, 21, 21, 21, 1,
		21, 21, 25, 25, 21, 21, 21, 41, 21, 21, 21, 21, 21, 21, 25, 21, 21, 21, 25, 25, 21, 41, 21, 21, 21, 21, 21, 21, 21, 21, 21, 1,
		25, 25, 25, 21, 21, 21, 21, 41, 21, 21, 21, 21, 21, 25, 25, 25, 21, 21, 25, 21, 21, 41, 41, 21, 21, 21, 21, 21, 21, 21, 1, 1,
		25, 21, 21, 21, 21, 21, 41, 41, 21, 21, 21, 21, 21, 21, 25, 25, 25, 25, 25, 21, 21, 21, 41, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		25, 21, 21, 21, 41, 41, 41, 21, 21, 21, 21, 21, 21, 21, 21, 25, 21, 21, 21, 21, 21, 21, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21,
		25, 21, 21, 21, 41, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 25, 21, 21, 21, 21, 21, 21, 21, 21, 21, 41, 41, 41, 21, 21, 21, 21,
		25, 25, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 25, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
		25, 25, 25, 25, 21, 21, 21, 21, 21, 21, 21, 21, 21, 25, 25, 25, 21, 21, 21, 21, 21, 21, 21, 21, 1, 21, 21, 21, 21, 1, 21, 21,
		25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
	};

	// on crée le plan avec le niveau précédemment défini en int
	Plan plan;
	StaticTuile tuile = StaticTuile();
	TuileSetWorld tuileset;
	SurfaceWorld surface;
	plan.setSurface(&surface);
	plan.setTuileSet(&tuileset);
	surface.loadTexture(tuileset.getImageFile());
	surface.setSpriteCount(w*h);
	surface.setArrayWidth(w);
	surface.setSprite(tuile,level);
	

	// on fait tourner la boucle principale
	while (window.isOpen())
	{
		// on gère les évènements
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// on dessine le niveau
		window.clear();
		window.draw(surface);
		window.display();
	}

	return 0;
}