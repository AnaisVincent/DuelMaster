#pragma once
#ifndef __StatePlan_h__
#define __StatePlan_h__
#include "Plan.h"

class StatePlan : public Plan
{
public:
	StatePlan() {}
	~StatePlan() {}
	void etatChanged(e : const state StateEvent);

};

#endif
