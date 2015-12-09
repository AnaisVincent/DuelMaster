#ifndef DEBUGPLAN__H
#define DEBUGPLAN__H

#include "Plan.h"

/// class DebugPlan - 
class DebugPlan : public Plan {
  // Operations
public:
  DebugPlan ();
  ~DebugPlan ();
  void  printGridValues (int* values, int n);
};

#endif
