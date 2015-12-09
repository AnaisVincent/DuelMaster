#ifndef TUILESETCHAR__H
#define TUILESETCHAR__H

#include "TuileSet.h"

/// class TuileSetChar - 
class TuileSetChar : public TuileSet {
  // Attributes
private:
  Tuile* tuiles;
  // Operations
public:
  TuileSetChar ();
  ~TuileSetChar ();
  int const  getCellWidth ();
  int const  getCellHeight ();
};

#endif
