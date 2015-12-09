#ifndef IA_RIVALSIMPLE__H
#define IA_RIVALSIMPLE__H

#include "IA.h"

/// class IA_RivalSimple - 
class IA_RivalSimple : public IA {
  // Operations
public:
  IA_RivalSimple ();
  ~IA_RivalSimple ();
  void  addComportement (Comportement* behavior);
  DirectionCommande* createDirectionCommande ();
};

#endif
