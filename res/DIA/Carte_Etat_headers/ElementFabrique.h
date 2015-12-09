#ifndef ELEMENTFABRIQUE__H
#define ELEMENTFABRIQUE__H

#include "AElementAlloc.h"

/// class ElementFabrique - 
class ElementFabrique {
  // Associations
  // Operations
public:
  ~ElementFabrique ();
  void  registerType (char id, AElementAllo c);
};

#endif
