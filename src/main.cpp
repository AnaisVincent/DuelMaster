#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include "Rendu_headers/Moteur_de_Rendu.hpp"
#include "Carte_Etat_headers/Exploration.hpp"
#include "Moteurdejeu_headers/Moteur_de_Jeu.hpp"
//#include "Moteurdejeu_headers/ActionListe.h"
//#include "Moteurdejeu_headers/MoveCharacter.h"
//#include "Moteurdejeu_headers/Ruler.h"
//#include "Rendu_headers/Map.h"
#include "IHM_headers/IHM.hpp"
#include <thread>
#include <mutex>

using namespace Moteur_de_Jeu;
using namespace Exploration;
using namespace Moteur_de_Rendu;
using namespace IHM;


int w = 48;
int h = 24;
int dimTuile = 32;
MoveCharacter action;
//ActionListe actions=ActionListe();
Ruler ruler(w,h);
//création personnage
Personnage perso;
sf::Texture personnage;
sf::Sprite sprite_personnage;

Personnage rival;
sf::Texture tex_rival;
sf::Sprite sprite_rival;

bool carre = false;

//void moteurJeu(sf::Event event, int dx, int dy, int rx, int ry, std::vector<int> level);


//Mutex
/*std::mutex mu;
void shared_print(char msg, int id);*/


int main()
{
	std::cout << "bonjour" << std::endl;
	perso = Personnage();
	rival = Personnage();
	std::vector<Personnage> persos;
	persos.push_back(perso);
	persos.push_back(rival);

	// on crée la fenêtre
	sf::RenderWindow window(sf::VideoMode(w * dimTuile, h * dimTuile), "Tilemap");

	// on définit le niveau
	std::cout << "chargement de la map 1" << std::endl;
	Map map = Map();
	map.levelMap();
	std::cout << "fin chargement" << std::endl;

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
	surface.setSprite(tuile, map.getlevel());
	
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

	//Déclaration du moteur de jeu et du controlleur
	Moteur moteur = Moteur(&perso, &rival);
	moteur.setMode(Moteur_de_Jeu::PLAY);
	PlayerController p_control = PlayerController();

	//Threads
	std::thread tMoteur(&ActionListe::apply, moteur.getActions());
	//std::thread tPlayerController(&PlayerController::moveCommande);


	// on fait tourner la boucle principale
	while (window.isOpen())
	{
		int x = moteur.getPerso()->getX();
		int y = moteur.getPerso()->getY();
		int rx = moteur.getRival()->getX();
		int ry = moteur.getRival()->getY();
		// on gère les évènements
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Right || event.key.code == sf::Keyboard::Left || event.key.code == sf::Keyboard::Up || event.key.code == sf::Keyboard::Down)) {
				moteur.addCommands(p_control.moveCommande(event));
				moteur.exec();
			}

		}
		sprite_personnage.setPosition(x, y);
		sprite_rival.setPosition(rx, ry);


		// on dessine le niveau
		window.clear();
		window.draw(surface);
		window.draw(sprite_personnage);
		window.draw(sprite_rival);
		//window.draw(surface2);
		window.display();

	}

	if (tMoteur.joinable()) { //on ajoute cette ligne sinon peut crasher
		tMoteur.join(); //attend que tMoteur finisse
	}
	/*if (tPlayerController.joinable()) {
		tPlayerController.join();
	}*/

	return 0;
}

//à utiliser pour 
/*void shared_print(char msg, int id) {
	std::lock_guard<std::mutex> guard(mu); //Evite d'être verrouiller à jamais si la ligne entre lock() et unlock() lève une exception
	//mu.lock();
	std::cout << msg << id << std::endl;
	//mu.unlock();
}*/



