#ifndef ARME__H
#define ARME__H

#include "Carte.h"

/// class Arme - 
class Arme : public Carte {
  // Attributes
private:
  int  durabilitite;
  // Operations
public:
  Arme ();
  ~Arme ();
  void  clone ();
  void  utiliser ();
};

#endif
