#ifndef MODECOMMANDE__H
#define MODECOMMANDE__H

#include "Commande.h"

/// class ModeCommande - 
class ModeCommande : public Commande {
  // Attributes
protected:
  Moteur::MoteurMode  mode;
  // Operations
public:
  ModeCommande (Moteur::MoteurMode mode);
};

#endif
