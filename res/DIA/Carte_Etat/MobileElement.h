#ifndef MOBILEELEMENT__H
#define MOBILEELEMENT__H

#include "Direction.h"
#include "Element.h"

/// class MobileElement - 
class MobileElement : public Element {
  // Attributes
protected:
  int  speed;
  int  position;
  Direction  direction;
  // Operations
public:
  MobileElement ();
  ~MobileElement ();
  bool const  isStatic ();
  int const  getSpeed ();
  int const  getPosition ();
  Direction const  getDirection ();
  void  setSpeed (int s);
  void  setPosition (int p);
  void  setDirection (Direction dir);
  virtual bool isPersonnage () = 0;
};

#endif
