#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include "Rendu/Plan.h"
#include "Carte_Etat/Personnage.h"
#include "Moteurdejeu/ActionListe.h"
#include "Moteurdejeu/MoveCharacter.h"
#include "Moteurdejeu/Ruler.h"
#include "Rendu/Map.h"


int w = 48;
int h = 24;
int dimTuile = 32;
MoveCharacter action;
ActionListe actions=ActionListe();
Ruler ruler(w,h);
//création personnage
Personnage perso;
sf::Texture personnage;
sf::Sprite sprite_personnage;

Personnage rival;
sf::Texture tex_rival;
sf::Sprite sprite_rival;


bool carre = false;



void moteurJeu(sf::Event event, int dx, int dy, int rx, int ry, std::vector<int> level);


int main()
{

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

	// on définit le niveau
	std::cout << "map generation" << std::endl;
	Map map = Map();
	map.levelMap();
	std::vector<int> level = map.getlevel();
	std::cout << "end map generation" << std::endl;

	// on crée le plan avec le niveau précédemment défini en int
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
	
	// on crée le plan avec les personnages
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



	if(!personnage.loadFromFile("../res/ExplorationPart/Sprites/PrPrincipal.png"))
	{
		perror("erreur lors du chargement de l'image");
	}
	personnage.setSmooth(true);
	sprite_personnage.setTexture(personnage);
	sprite_personnage.setTextureRect(sf::IntRect(0, 32, 32, 32));
	perso.setX(w / 2 * dimTuile);
	perso.setY(h / 2 * dimTuile);

	if (!tex_rival.loadFromFile("../res/ExplorationPart/Sprites/PrRival.png"))
	{
		perror("erreur lors du chargement de l'image");
	}
	tex_rival.setSmooth(true);
	sprite_rival.setTexture(tex_rival);
	sprite_rival.setTextureRect(sf::IntRect(0, 32, 32, 32));
	rival.setX((w / 2 + 1)* dimTuile);
	rival.setY((h / 2 + 1) * dimTuile);


	// on fait tourner la boucle principale
	while (window.isOpen())
	{
		int x = perso.getX();
		int y = perso.getY();
		int rx = rival.getX();
		int ry = rival.getY();
		// on gère les évènements
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
			window.close();
		}
			
			moteurJeu(event, x/32, y/32, rx, ry, level);
		}
		sprite_personnage.setPosition(x, y);
		sprite_rival.setPosition(rx,ry);
		

		// on dessine le niveau
		window.clear();
		window.draw(surface);
		window.draw(sprite_personnage);
		window.draw(sprite_rival);
		//window.draw(surface2);
		window.display();


	}
	return 0;
}



void moteurJeu(sf::Event event, int dx, int dy, int rx,int ry, std::vector<int> level) {


	int distx = 0;
	int disty = 0;

	int signe = 0;

	if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Right)) {
		action = MoveCharacter(dimTuile, 0, &perso);
		actions.add(&action);
		// check if action is true
		if (perso.getX() < (w - 1)*dimTuile && ruler.collisions(dx, dy, 0, level)) // le personnage ne peut pas aller hors de l'ecran; par défaut, permission=false
			actions.setPermission(actions.size(), true);
		else
			actions.setPermission(actions.size(), false);


	}
	else if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Left)) {
		action = MoveCharacter(-dimTuile, 0, &perso);

		actions.add(&action);
		// check if action is true
		if (perso.getX() > 0 && ruler.collisions(dx, dy, 1, level))
			actions.setPermission(actions.size(), true);
		else
			actions.setPermission(actions.size(), false);


	}
	else if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Up)) {
		action = MoveCharacter(0, -dimTuile, &perso);

		actions.add(&action);
		// check if action is true
		if (perso.getY() > 0 && ruler.collisions(dx, dy, 2, level))
			actions.setPermission(actions.size(), true);
		else
			actions.setPermission(actions.size(), false);


	}
	else if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Down)) {
		action = MoveCharacter(0, dimTuile, &perso);

		actions.add(&action);
		// check if action is true
		if (perso.getY() < (h - 1)*dimTuile && ruler.collisions(dx, dy, 3, level))
			actions.setPermission(actions.size(), true);
		else
			actions.setPermission(actions.size(), false);

	}
	else {
		int x = perso.getX();
		int y = perso.getY();

		if ((x - rx)*(x - rx) < (y - ry)*(y - ry)) {
			if (y < ry ) {
				action = MoveCharacter(0, -dimTuile, &rival);//aller à gauche
				actions.add(&action);
				actions.setPermission(actions.size(), true);
			}
			if (ry < y){
				action = MoveCharacter(0, dimTuile, &rival);//aller à droite
				actions.add(&action);
				actions.setPermission(actions.size(), true);
			}
					

		}
		if ((x - rx)*(x - rx) > (y - ry)*(y - ry)) {
			if (x < rx) {
				action = MoveCharacter(-dimTuile, 0, &rival);//aller en bas
				actions.add(&action);
				actions.setPermission(actions.size(), true);
			}
			if (rx < x) {
				action = MoveCharacter(dimTuile, 0, &rival);//aller en haut
				actions.add(&action);
				actions.setPermission(actions.size(), true);
			}
			
		}
	}

			actions.apply();

}
