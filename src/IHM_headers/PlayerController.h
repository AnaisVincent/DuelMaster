#pragma once
#include "../Carte_Etat_headers/Personnage.h"
#include "../Moteurdejeu_headers/DirectionCommande.h"
#include "../Carte_Etat_headers/Element.h"
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