#pragma once
#ifndef __ElementListPlan_h__
#define __ElementListPlan_h__
#include "Plan.h"


class ElementListPlan : public Plan
{
public:
	ElementListPlan() {}
	~ElementListPlan() {}
	void etatChanged(e:const state StateEvent);

protected:
	void update(elementList:const state ElementList&, i:int);
};

#endif