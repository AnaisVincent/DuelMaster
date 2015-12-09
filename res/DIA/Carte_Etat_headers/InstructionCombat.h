#ifndef INSTRUCTIONCOMBAT__H
#define INSTRUCTIONCOMBAT__H

#include "Instruction.h"

/// class InstructionCombat - 
class InstructionCombat : public Instruction {
  // Operations
public:
  InstructionCombat ();
  ~InstructionCombat ();
  void  execute ();
};

#endif
