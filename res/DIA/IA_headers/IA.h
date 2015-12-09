#ifndef IA__H
#define IA__H

#include "ComportementDeplacement.h"

/// class IA - 
class IA {
  // Associations
  // Attributes
protected:
  Etat* s;
  Moteur  moteur;
  // Operations
public:
  IA ();
  IA (Moteur moteur);
  ~IA ();
  virtual virtual void  addComportement (Comportement* behavior) = 0;
  virtual virtual DirectionCommande* createDirectionCommande () = 0;
};

#endif
