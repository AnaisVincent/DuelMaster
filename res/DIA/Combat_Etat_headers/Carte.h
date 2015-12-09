#ifndef CARTE__H
#define CARTE__H

#include "ElementDuel.h"

/// class Carte - 
class Carte : public ElementDuel {
  // Operations
public:
  Carte ();
  ~Carte ();
  virtual void  clone () = 0;
  virtual virtual void  utiliser () = 0;
};

#endif
