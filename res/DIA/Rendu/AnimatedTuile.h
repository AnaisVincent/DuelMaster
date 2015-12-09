#ifndef ANIMATEDTUILE__H
#define ANIMATEDTUILE__H

#include "Tuile.h"

/// class AnimatedTuile - 
class AnimatedTuile : public Tuile {
  // Attributes
protected:
  Tuile* tuiles;
  float  rate;
  // Operations
public:
  AnimatedTuile (float rate);
  ~AnimatedTuile ();
  bool const  isAnimated ();
  float const  getRate ();
  int const  getTuileCount ();
  void  setRate (float rate);
  void  addTuile (Tuile* tuile);
  void  setTuile (int i, Tuile* tuile);
};

#endif
