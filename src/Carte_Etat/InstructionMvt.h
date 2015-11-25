#pragma once
#ifndef __InstructionMvt_h__
#define __InstructionMvt_h__
#include "Instruction.h" 
#include "Element.h"

class InstructionMvt : public Instruction
{
private:
	int id;
	int distance;
	Element::Direction direction;

public:
	InstructionMvt();
	~InstructionMvt();

	void execute() override;

};


#endif