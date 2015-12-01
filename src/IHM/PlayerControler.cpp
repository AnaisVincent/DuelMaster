#include "PlayerControler.h"
#include "../Carte_Etat/Personnage.h"

PlayerControler::PlayerControler()
{
	perso = Personnage();
}

PlayerControler::~PlayerControler()
{
}

DirectionCommande* PlayerControler::moveCommande(sf::Event event)
{
	std::cout << "envoi d'une commande de direction" << std::endl;
	//if (perso.isPersonnage()) {

		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Right)) {
			return new DirectionCommande(0, Element::EST);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Left)) {
			return new DirectionCommande(0, Element::OUEST);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Up)) {
			return new DirectionCommande(0, Element::NORD);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Down)) {
			return new DirectionCommande(0, Element::SUD);
		}

	//}
	//throw std::logic_error("Perdu");
}
