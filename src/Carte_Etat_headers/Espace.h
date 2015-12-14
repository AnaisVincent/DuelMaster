#pragma once
#include "StaticElement.h"
#ifndef __Espace_h__
#define __Espace_h__


class Espace : public StaticElement
{
public:	enum enumEspace { VIDE, CADEAU };

private:
	enumEspace typeespace; // 1 = vide ; 2 = cadeau


public:
	Espace();
	Espace(enumEspace);
	~Espace();

	int const getTypeId() override;
	enumEspace const getTypeEspace();
	bool const isSpace() override;
	void clone() override;

};





#endif