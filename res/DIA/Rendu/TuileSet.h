#ifndef TUILESET__H
#define TUILESET__H

#include "Tuile.h"

/// class TuileSet - 
class TuileSet {
  // Associations
  // Operations
public:
  ~TuileSet ();
  virtual getCellWidth () = 0;
  virtual getCellHeight () = 0;
};

#endif
