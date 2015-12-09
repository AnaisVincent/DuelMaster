#pragma once
#ifndef __InstructionTexte_h__
#define __InstructionTexte_h__
#include "Instruction.h" 
#include <string>

class InstructionTexte : public Instruction
{
private:
	std::string texte;

public:
	InstructionTexte();
	~InstructionTexte();

	void execute() override;

};


#endif