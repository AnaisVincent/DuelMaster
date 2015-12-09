#ifndef ESPACE__H
#define ESPACE__H

#include "StaticElement.h"
#include "TypeEspace.h"

/// class Espace - 
class Espace : public StaticElement {
  // Associations
  // Attributes
private:
  enumEspace  typeespace;
  // Operations
public:
  Espace ();
  Espace (enumEspac e);
  ~Espace ();
  int const  getTypeId ();
  enumEspace const  getTypeEspace ();
  bool const  isSpace ();
  void  clone ();
};

#endif
