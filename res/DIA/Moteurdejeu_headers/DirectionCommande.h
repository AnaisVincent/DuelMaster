#ifndef DIRECTIONCOMMANDE__H
#define DIRECTIONCOMMANDE__H

#include "Commande.h"

/// class DirectionCommande - 
class DirectionCommande : public Commande {
  // Attributes
protected:
  int  character;
  Element::Direction  direction;
  // Operations
public:
  DirectionCommande (int c, Element::Direction d);
  int const  getCharacter ();
};

#endif
