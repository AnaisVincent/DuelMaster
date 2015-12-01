#include "PlayerControler.h"
#include "../Carte_Etat/Personnage.h"

PlayerControler::PlayerControler()
{
}

PlayerControler::~PlayerControler()
{
}

DirectionCommande PlayerControler::moveCommande(sf::Event event)
{

	if (perso.isPersonnage() == true) {

		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Right)) {
			return DirectionCommande(0, Element::OUEST);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Left)) {
			return DirectionCommande(0, Element::EST);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Up)) {
			return DirectionCommande(0, Element::NORD);
		}
		if (event.type == sf::Event::KeyPressed && (event.key.code == sf::Keyboard::Down)) {
			return DirectionCommande(0, Element::SUD);
		}

	}
}
