#ifndef ANIMATION__H
#define ANIMATION__H

#include "Tuile.h"

/// class Animation - 
class Animation {
  // Associations
  // Attributes
private:
  int  i;
protected:
  int  x;
  int  y;
  Tuile* tuile;
  float  speed;
  int  start;
  // Operations
public:
  Animation (int x, int y, Tuile* a);
  void  setSpeed (float speed);
  void  sync (int time);
  void  update (int time, Surface* surface);
};

#endif
