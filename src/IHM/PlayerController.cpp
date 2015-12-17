#include "../IHM_headers/IHM.hpp"
#include "../Carte_Etat_headers/Exploration.hpp"

using namespace Exploration;
using namespace IHM;

PlayerController::PlayerController()
{
	perso = Personnage();
}

PlayerController::~PlayerController()
{
}

Moteur_de_Jeu::DirectionCommande* PlayerController::moveCommande(sf::Event event)
{
	std::cout << "envoi d'une commande de direction" << std::endl;
	//if (perso.isPersonnage()) {

		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Right)) {
			return new Moteur_de_Jeu::DirectionCommande(0, Exploration::EST);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Left)) {
			return new Moteur_de_Jeu::DirectionCommande(0, Exploration::OUEST);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Up)) {
			return new Moteur_de_Jeu::DirectionCommande(0, Exploration::NORD);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Down)) {
			return new Moteur_de_Jeu::DirectionCommande(0, Exploration::SUD);
		}
		else return nullptr;
	//}
	//throw std::logic_error("Perdu");
}
