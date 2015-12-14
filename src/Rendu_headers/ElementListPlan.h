#pragma once
#ifndef __ElementListPlan_h__
#define __ElementListPlan_h__
#include "Plan.h"


class ElementListPlan : public Plan
{
public:
	ElementListPlan();
	~ElementListPlan();
	//void etatChanged(const state StateEvent e);

protected:
	//void update(const state ElementList& elementList, int i);
};

#endif