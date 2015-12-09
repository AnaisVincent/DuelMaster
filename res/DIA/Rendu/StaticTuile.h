#ifndef STATICTUILE__H
#define STATICTUILE__H

#include "Tuile.h"

/// class StaticTuile - 
class StaticTuile : public Tuile {
  // Attributes
protected:
  int  x;
  int  y;
  int  width;
  int  height;
  // Operations
public:
  StaticTuile (int x, int y, int width, int height);
  ~StaticTuile ();
  bool const  isAnimated ();
  int const  getX ();
  int const  getY ();
  int const  getWidth ();
  int const  getHeight ();
  void  setX (int x);
  void  setY (int x);
  void  setWidth (int x);
  void  setHeight (int x);
};

#endif
