#pragma once
#ifndef __ElementAlloc_h__
#define __ElementAlloc_h__
#include "Element.h"


class ElementAlloc
{
protected:
	char id;

public:
	ElementAlloc(char id);

	Element* newInstance(char id);
};




#endif
