#ifndef SCENE__H
#define SCENE__H

#include "StateObserver.h"
#include "StatePlan.h"
#include "ElementListPlan.h"
#include "DebugPlan.h"

/// class Scene - 
class Scene : public StateObserver {
  // Associations
  // Attributes
protected:
  int  width;
  int  height;
  // Operations
public:
  Scene ();
  ~Scene ();
  int const  getWidth ();
  int const  getHeight ();
  int const  getPlanCount ();
  void  setPlan (int idx, Plan* Plan);
  void  setSurface (int idx, Surface* surface);
  void  sync (int time);
  void  update (int time);
};

#endif
