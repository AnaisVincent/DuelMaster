#ifndef PLAN__H
#define PLAN__H

#include "StateObserver.h"
#include "Surface.h"
#include "TuileSet.h"
#include "Animation.h"

/// class Plan - 
class Plan : public StateObserver {
  // Associations
  // Attributes
protected:
  Surface* surface;
  TuileSet* tuileset;
  // Operations
public:
  Plan ();
  ~Plan ();
  void  setTuileSet (TuileSet* tuileset);
  void  setSurface (Surface* surface);
  void  setAnimation (int i, Animation* a);
  void  printText (int x, int y, char* msg, int spriteIdx, int w, int h);
  void  sync (int time);
  void  update (int time);
};

#endif
