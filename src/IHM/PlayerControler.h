#pragma once
#include "../Carte_Etat/Personnage.h"
#include "../Moteurdejeu/DirectionCommande.h"
#include "../Carte_Etat/Element.h"
#ifndef __PlayerControler_h__
#define __PlayerControler_h__
#include <SFML/Graphics.hpp>


class PlayerControler
{

protected:
	Personnage perso;
	sf::Event event;

public:
	PlayerControler();
	~PlayerControler();

	DirectionCommande moveCommande(sf::Event event);
};

#endif