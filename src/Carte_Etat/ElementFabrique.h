#pragma once
#ifndef __ElementFabrique_h__
#define __ElementFabrique_h__
#include "Element.h"
#include "AElementAlloc.h"
#include <map>


class ElementFabrique
{
protected:
	std::map<char,AElementAlloc*> list;

public:
	~ElementFabrique();

	Element* const newInstance(char id);
	void registerType(char id, AElementAlloc*);
};




#endif
