#ifndef MOVECHARACTER__H
#define MOVECHARACTER__H

#include "Action.h"

/// class MoveCharacter - 
class MoveCharacter : public Action {
  // Attributes
protected:
  int  idx;
  int  dx;
  int  dy;
  Personnage* perso;
  // Operations
public:
  MoveCharacter ();
  MoveCharacter (int idx);
  MoveCharacter (int dx, int dy, Personnage* perso);
  ~MoveCharacter ();
  int  getX ();
  int  getY ();
  int  getDX ();
  int  getDY ();
  void  apply ();
};

#endif
