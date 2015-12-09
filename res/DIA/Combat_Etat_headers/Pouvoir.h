#ifndef POUVOIR__H
#define POUVOIR__H

#include "ElementDuel.h"

/// class Pouvoir - 
class Pouvoir : public ElementDuel {
  // Operations
public:
  Pouvoir ();
  ~Pouvoir ();
  void  clone ();
  void  utiliser ();
};

#endif
