#ifndef ELEMENT__H
#define ELEMENT__H

#include "Direction.h"
#include "TypeId.h"

/// class Element - 
class Element {
  // Associations
  // Attributes
protected:
  int  x;
  int  y;
  Direction  orientation;
  // Operations
public:
  Element ();
  ~Element ();
  virtual void  clone ();
  int const  getX ();
  int const  getY ();
  Direction const  getOrientation ();
  void  setX (int x);
  void  setY (int x);
  void  setOrientation (Direction dir);
  virtual int getTypeId () = 0;
  virtual bool isStatic () = 0;
};

#endif
