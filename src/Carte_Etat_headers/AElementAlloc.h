#pragma once
#ifndef __AElementAlloc_h__
#define __AElementAlloc_h__
#include "Element.h"


class AElementAlloc
{

public:
	~AElementAlloc();

	virtual Element* newInstance(char id) = 0;
};




#endif
