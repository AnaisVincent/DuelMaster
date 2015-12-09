#ifndef PERSONNAGE__H
#define PERSONNAGE__H

#include "MobileElement.h"
#include "TypePersonnage.h"

/// class Personnage - 
class Personnage : public MobileElement {
  // Associations
  // Attributes
private:
  enumPersonnage  typePersonnage;
  // Operations
public:
  Personnage ();
  Personnage (enumPersonnag e);
  ~Personnage ();
  int const  getTypeId ();
  enumPersonnage const  getTypePersonnage ();
  bool const  isPersonnage ();
  void  clone ();
};

#endif
