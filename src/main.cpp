#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "Plan.h"
#include "Personnage.h"
#include "ActionListe.h"
#include "MoveCharacter.h"

int w = 48;
int h = 24;
int dimTuile = 32;
MoveCharacter action;
ActionListe actions=ActionListe();
//cr�ation personnage
Personnage perso;
sf::Texture personnage;
sf::Sprite sprite_personnage;

bool carre = false;



void moteurJeu();


int main()
{

	// on cr�e la fen�tre
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

	// on d�finition du niveau
	const int level[] =
	{
		25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 70, 20, 21, 21, 21, 21, 21, 21, 21, 21, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01,
		25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 70, 20, 21, 21, 21, 40, 21, 21, 01, 01, 01, 01, 01, 01, 01, 21, 21, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01,
		25, 25, 26, 21, 21, 21, 28, 25, 25, 25, 25, 26, 21, 21, 21, 28, 25, 25, 70, 20, 21, 21, 40, 40, 21, 21, 21, 01, 01, 01, 01, 21, 21, 21, 21, 21, 21, 01, 01, 01, 40, 40, 40, 40, 01, 01, 01, 01,
		25, 26, 21, 21, 21, 21, 21, 21, 28, 25, 26, 21, 21, 21, 21, 21, 21, 28, 25, 26, 21, 21, 21, 21, 21, 21, 21, 21, 01, 01, 21, 21, 21, 21, 21, 21, 21, 21, 21, 40, 40, 21, 40, 40, 40, 01, 01, 01,
		25, 26, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 01, 21, 21, 21, 28, 70, 20, 21, 21, 21, 21, 21, 21, 21, 21, 01, 01, 21, 21, 01, 01, 01, 21, 21, 21, 21, 21, 21, 21, 21, 40, 40, 40, 01,
		25, 26, 21, 21, 40, 40, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 40, 40, 21, 28, 70, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 01, 01, 01, 01, 21, 21, 01, 01, 21, 21, 21, 40, 40, 01,
		25, 26, 21, 21, 21, 21, 40, 21, 21, 41, 41, 41, 41, 41, 41, 21, 21, 40, 21, 21, 28, 26, 21, 21, 41, 41, 41, 41, 41, 41, 41, 41, 41, 21, 21, 21, 01, 21, 21, 21, 21, 01, 01, 21, 21, 21, 40, 01,
		25, 26, 21, 21, 21, 21, 01, 01, 21, 41, 21, 21, 21, 21, 41, 41, 41, 21, 21, 21, 21, 21, 21, 41, 41, 21, 21, 01, 01, 21, 21, 21, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21, 21, 21, 21, 40, 01,
		25, 70, 20, 21, 21, 21, 21, 21, 41, 41, 21, 01, 21, 40, 21, 21, 41, 41, 41, 41, 41, 41, 41, 41, 21, 21, 21, 21, 01, 01, 01, 21, 01, 01, 01, 01, 41, 41, 41, 41, 21, 21, 21, 21, 21, 40, 01, 01,
		28, 25, 70, 20, 21, 21, 21, 21, 41, 21, 21, 21, 21, 21, 21, 21, 21, 40, 18, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 01, 01, 01, 01, 01, 40, 40, 40, 41, 21, 21, 21, 21, 21, 40, 40, 01, 01, 01,
		21, 28, 25, 26, 21, 21, 21, 21, 41, 21, 21, 21, 21, 21, 21, 18, 19, 19, 24, 26, 21, 21, 21, 21, 21, 40, 21, 21, 01, 01, 01, 01, 01, 40, 21, 21, 41, 41, 21, 21, 01, 01, 01, 01, 01, 01, 01, 01,
		21, 40, 28, 70, 19, 20, 21, 21, 41, 21, 18, 20, 40, 18, 19, 24, 25, 25, 26, 21, 21, 40, 21, 21, 40, 21, 21, 21, 21, 01, 01, 01, 01, 21, 21, 21, 41, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01, 01,
		21, 21, 21, 28, 25, 26, 40, 41, 41, 21, 28, 70, 19, 24, 25, 25, 25, 26, 21, 21, 40, 40, 21, 21, 21, 21, 21, 21, 21, 21, 21, 40, 40, 21, 21, 21, 41, 21, 01, 01, 01, 01, 01, 40, 40, 21, 21, 21,
		40, 21, 21, 40, 28, 26, 21, 41, 21, 21, 28, 25, 25, 25, 25, 25, 26, 21, 21, 21, 40, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 41, 21, 40, 40, 01, 01, 21, 21, 21, 21, 21, 21,
		52, 40, 21, 18, 24, 26, 21, 41, 21, 21, 28, 25, 25, 25, 25, 25, 26, 21, 21, 21, 21, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21, 21, 40, 40, 21, 41, 21, 21, 21, 21, 21, 21, 21, 21, 21, 40, 21,
		40, 21, 21, 28, 26, 21, 21, 41, 40, 40, 21, 21, 21, 40, 28, 25, 70, 20, 21, 21, 21, 41, 21, 21, 21, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21, 41, 21, 21, 21, 33, 21, 21, 21, 21, 21, 21, 21,
		21, 21, 18, 24, 26, 21, 41, 41, 21, 21, 40, 40, 21, 21, 40, 28, 25, 26, 21, 21, 41, 41, 21, 40, 21, 21, 21, 21, 21, 41, 41, 41, 41, 21, 21, 21, 41, 21, 21, 21, 21, 21, 40, 21, 21, 21, 33, 33,
		21, 21, 28, 26, 40, 21, 41, 01, 21, 52, 40, 21, 21, 21, 21, 21, 28, 26, 21, 21, 41, 21, 40, 40, 01, 21, 21, 21, 40, 40, 40, 21, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 21, 21, 33, 33, 33, 52,
		21, 21, 21, 21, 40, 21, 41, 21, 21, 21, 21, 01, 52, 21, 21, 21, 21, 21, 21, 21, 41, 21, 40, 01, 01, 40, 40, 01, 01, 01, 01, 40, 40, 21, 21, 21, 41, 41, 41, 21, 21, 21, 33, 33, 33, 33, 33, 33,
		40, 40, 21, 21, 21, 21, 41, 41, 41, 41, 21, 40, 40, 40, 01, 21, 21, 41, 41, 41, 41, 21, 40, 40, 01, 01, 01, 01, 40, 40, 40, 21, 21, 21, 33, 21, 21, 21, 41, 41, 41, 33, 33, 52, 33, 33, 33, 33,
		40, 21, 21, 21, 21, 21, 21, 21, 21, 41, 41, 41, 41, 41, 41, 41, 41, 41, 21, 21, 21, 21, 21, 40, 01, 01, 01, 40, 21, 21, 21, 21, 33, 21, 21, 21, 21, 21, 21, 21, 41, 33, 33, 33, 33, 33, 33, 33,
		40, 40, 21, 21, 21, 40, 40, 40, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 40, 40, 21, 01, 01, 01, 40, 40, 21, 21, 21, 33, 52, 33, 21, 21, 21, 21, 33, 33, 41, 41, 41, 33, 33, 52, 33, 33,
		40, 40, 40, 21, 40, 40, 52, 40, 40, 40, 40, 40, 21, 21, 21, 21, 21, 40, 40, 40, 40, 01, 40, 40, 01, 01, 01, 01, 21, 21, 21, 21, 21, 33, 21, 21, 21, 33, 52, 33, 33, 33, 33, 33, 33, 33, 33, 33,
		52, 40, 40, 40, 40, 40, 40, 40, 01, 40, 40, 40, 52, 40, 40, 01, 40, 40, 01, 52, 01, 40, 40, 01, 01, 01, 01, 01, 01, 21, 21, 21, 21, 21, 21, 21, 33, 33, 33, 33, 33, 33, 52, 33, 33, 33, 33, 33,

	};

	// on cr�e le plan avec le niveau pr�c�demment d�fini en int
	Plan plan1;
	StaticTuile tuile = StaticTuile();
	TuileSetWorld tuileset;
	SurfaceWorld surface;
	plan1.setSurface(&surface);
	plan1.setTuileSet(&tuileset);
	surface.loadTexture(tuileset.getImageFile());
	surface.setSpriteCount(w*h);
	surface.setArrayWidth(w);
	surface.setSprite(tuile,level);
	
	// on cr�e le plan avec les personnages
	/*Plan plan2;
	StaticTuile perso = StaticTuile();
	TuileSetChar tuileset2;
	SurfaceWorld surface2;
	plan2.setSurface(&surface2);
	plan2.setTuileSet(&tuileset2);
	surface2.loadTexture(tuileset2.getImageFile());
	surface2.setSpriteCount(1);
	surface2.setArrayWidth(1);
	int p[] = { 1 };
	surface2.setSprite(perso, p);*/



	if(!personnage.loadFromFile("../../res/ExplorationPart/Sprites/PrPrincipal.png"))
	{
		perror("erreur lors du chargement de l'image");
	}
	personnage.setSmooth(true);
	sprite_personnage.setTexture(personnage);
	sprite_personnage.setTextureRect(sf::IntRect(0, 32, 32, 32)); 
	

	// on fait tourner la boucle principale
	while (window.isOpen())
	{
		int x = perso.getX();
		int y = perso.getY();
		// on g�re les �v�nements
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		sprite_personnage.setPosition(x,y);
		// on dessine le niveau
		window.clear();
		window.draw(surface);
		window.draw(sprite_personnage);
		//window.draw(surface2);
		window.display();
		
		moteurJeu();
	}

	return 0;
}


void moteurJeu(){

	
	bool ordre=true;
	if(ordre){
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
			action=MoveCharacter(1,0,&perso);
			
			actions.add(&action);
			// check if action is true
			if(perso.getX()<(w-1)*dimTuile) // le personnage ne peut pas aller hors de l'ecran; par d�faut, permission=false
				actions.setPermission(actions.size(),true);
			else
				actions.setPermission(actions.size(),false);
			

		}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
			action=MoveCharacter(-1,0,&perso);
	
			actions.add(&action);
			// check if action is true
			if(perso.getX()>0)
				actions.setPermission(actions.size(),true);
			else
				actions.setPermission(actions.size(),false);			


		}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
			action=MoveCharacter(0,-1,&perso);
	
			actions.add(&action);
			// check if action is true
			if(perso.getY()>0)
				actions.setPermission(actions.size(),true);
			else
				actions.setPermission(actions.size(),false);
			

		}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
			action=MoveCharacter(0,1,&perso);	
		
			actions.add(&action);
			// check if action is true
			if(perso.getY()<(h-1)*dimTuile)
				actions.setPermission(actions.size(),true);			
			else
				actions.setPermission(actions.size(),false);

		}


		
		actions.apply();
		
		
		

	}
	
}
