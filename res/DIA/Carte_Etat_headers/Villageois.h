#ifndef VILLAGEOIS__H
#define VILLAGEOIS__H

#include "MobileElement.h"
#include "StatusVillageois.h"
#include "Dialogue.h"

/// class Villageois - 
class Villageois : public MobileElement {
  // Associations
  // Attributes
private:
  enumVillageois  typeVillageois;
  // Operations
public:
  Villageois ();
  Villageois (enumVillageoi s);
  ~Villageois ();
  int const  getTypeId ();
  enumVillageois const  getTypeVillageois ();
  bool const  isPersonnage ();
  void  clone ();
};

#endif
