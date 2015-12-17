#ifndef IHM__H
#define IHM__H

#include <SFML/Graphics.hpp>
#include "../Moteurdejeu_headers/Moteur_de_Jeu.h"

namespace IHM {

  /// class PlayerController - 
  class PlayerController {
    // Attributes
  protected:
    Exploration::Personnage  perso;
    sf::Event  event;
    // Operations
  public:
    PlayerController ();
    ~PlayerController ();
    Moteur_de_Jeu::DirectionCommande* moveCommande (sf::Event event);
  };

};

#endif
