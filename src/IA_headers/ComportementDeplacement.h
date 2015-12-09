#ifndef COMPORTEMENTDEPLACEMENT__H
#define COMPORTEMENTDEPLACEMENT__H

#include "Comportement.h"

/// class ComportementDeplacement - 
class ComportementDeplacement : public Comportement {
  // Operations
public:
  ComportementDeplacement ();
  ~ComportementDeplacement ();
  void  random ();
  void  smarter ();
  void  promenade ();
  void  stalker ();
};

#endif
