#pragma once
#include <vector>
#include "Comportement.h"
#ifndef __IA_h__
#define __IA_h__


class IA
{
protected:
	std::vector<Comportement> behavior;
	
public:
	IA();
	~IA();

};

#endif