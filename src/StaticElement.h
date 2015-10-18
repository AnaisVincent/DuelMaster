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

	int const getX() override;
	int const getY() override;
	void setX(int x) override;
	void setY(int x) override;


};





#endif