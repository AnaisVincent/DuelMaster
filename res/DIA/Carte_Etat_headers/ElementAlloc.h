#ifndef ELEMENTALLOC__H
#define ELEMENTALLOC__H

#include "AElementAlloc.h"

/// class ElementAlloc - 
class ElementAlloc : public AElementAlloc {
  // Attributes
protected:
  char  id;
  // Operations
public:
  ElementAlloc (char id);
  Element* newInstance (char id);
};

#endif
