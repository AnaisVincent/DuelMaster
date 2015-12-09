#ifndef STATICELEMENT__H
#define STATICELEMENT__H

#include "Element.h"

/// class StaticElement - 
class StaticElement : public Element {
  // Operations
public:
  StaticElement ();
  ~StaticElement ();
  bool const  isStatic ();
  virtual bool isSpace () = 0;
};

#endif
