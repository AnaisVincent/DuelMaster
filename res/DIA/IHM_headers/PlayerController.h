#ifndef PLAYERCONTROLLER__H
#define PLAYERCONTROLLER__H

/// class PlayerController - 
class PlayerController {
  // Attributes
protected:
  Personnage  perso;
  sf::Event  event;
  // Operations
public:
  PlayerController ();
  ~PlayerController ();
  DirectionCommande* moveCommande (sf::Event event);
};

#endif
