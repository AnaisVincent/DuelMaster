#ifndef OBSTACLE__H
#define OBSTACLE__H

#include "StaticElement.h"

/// class Obstacle - 
class Obstacle : public StaticElement {
  // Attributes
private:
  enumObstacle  typeObstacle;
  // Operations
public:
  Obstacle ();
  Obstacle (enumObstacl e);
  ~Obstacle ();
  int const  getTypeId ();
  enumObstacle const  getTypeObstacle ();
  bool const  isSpace ();
  void  clone ();
};

#endif
