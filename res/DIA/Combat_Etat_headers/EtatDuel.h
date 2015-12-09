#ifndef ETATDUEL__H
#define ETATDUEL__H

#include "VueListeCartes.h"
#include "ElementDuel.h"

/// class EtatDuel - 
class EtatDuel {
  // Associations
  // Attributes
private:
  int  points_combat;
  int  points_vie;
  Carte* liste_cartes;
  int  tour;
  int  compteur_pioche;
  // Operations
public:
  EtatDuel ();
  ~EtatDuel ();
  void  utiliser ();
};

#endif
