#pragma once
#include "../Carte_Etat/Personnage.h"
#include "../Moteurdejeu/DirectionCommande.h"
#include "../Carte_Etat/Element.h"
#include <iostream>
#ifndef __PlayerController_h__
#define __PlayerController_h__
#include <SFML/Graphics.hpp>


class PlayerController
{

protected:
	Personnage perso;
	sf::Event event;

public:
	PlayerController();
	~PlayerController();

	DirectionCommande* moveCommande(sf::Event event);
};

#endif