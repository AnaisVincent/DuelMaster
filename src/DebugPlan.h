#pragma once
#ifndef __DebugPlan_h__
#define __DebugPlan_h__
#include "Plan.h"


class DebugPlan
{
public:
	DebugPlan();
	~DebugPlan();
	//void etatChanged(const state StateEvent e);
	void printGridValues(int* values, int n);

};

#endif
