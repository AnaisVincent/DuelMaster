#pragma once
#ifndef __DebugPlan_h__
#define __DebugPlan_h__
#include "Plan.h"


class DebugPlan
{
public:
	DebugPlan() {}
	~DebugPlan();
	void etatChanged(e : const state StateEvent);
	void printGridValues(values:int*, n:int);

};

#endif
