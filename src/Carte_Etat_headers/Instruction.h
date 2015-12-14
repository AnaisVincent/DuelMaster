#pragma once
#ifndef __Instruction_h__
#define __Instruction_h__

class Instruction
{
public:
	Instruction();
	~Instruction();

	virtual void execute() = 0;

};


#endif