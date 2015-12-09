#ifndef INSTRUCTIONTEXTE__H
#define INSTRUCTIONTEXTE__H

#include "Instruction.h"

/// class InstructionTexte - 
class InstructionTexte : public Instruction {
  // Attributes
private:
  std::string  texte;
  // Operations
public:
  InstructionTexte ();
  ~InstructionTexte ();
  void  execute ();
};

#endif
