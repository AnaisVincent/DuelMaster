#ifndef TUILESET__H
#define TUILESET__H

#include "Tuile.h"

/// class TuileSet - 
class TuileSet {
  // Associations
  // Operations
public:
  ~TuileSet ();
  virtual int const getCellWidth () = 0;
  virtual int const getCellHeight () = 0;
};

#endif
