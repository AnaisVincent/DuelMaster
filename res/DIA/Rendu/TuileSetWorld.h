#ifndef TUILESETWORLD__H
#define TUILESETWORLD__H

#include "TuileSet.h"

/// class TuileSetWorld - 
class TuileSetWorld : public TuileSet {
  // Attributes
private:
  Tuile* tuiles;
  // Operations
public:
  TuileSetWorld ();
  ~TuileSetWorld ();
  int const  getCellWidth ();
  int const  getCellHeight ();
};

#endif
