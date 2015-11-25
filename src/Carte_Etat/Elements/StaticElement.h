#pragma once
#include "Element.h"
#ifndef __StaticElement_h__
#define __StaticElement_h__


class StaticElement : public Element
{

private:


public:
	StaticElement();
	~StaticElement();

	//int const getTypeId() override;
	bool const isStatic() override;
	virtual bool const isSpace() = 0;
	//void clone() override;

};





#endif