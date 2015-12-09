#ifndef INSTRUCTIONMVT__H
#define INSTRUCTIONMVT__H

#include "Instruction.h"
#include "Direction.h"

/// class InstructionMvt - 
class InstructionMvt : public Instruction {
  // Associations
  // Attributes
private:
  int  id;
  int  distance;
  Element::Direction  direction;
  // Operations
public:
  InstructionMvt ();
  ~InstructionMvt ();
  void  execute ();
};

#endif
