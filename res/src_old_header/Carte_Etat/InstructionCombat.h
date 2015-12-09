#pragma once
#ifndef __InstructionCombat_h__
#define __InstructionCombat_h__
#include "Instruction.h" 

class InstructionCombat : public Instruction
{
public:
	InstructionCombat();
	~InstructionCombat();

	void execute() override;

};


#endif