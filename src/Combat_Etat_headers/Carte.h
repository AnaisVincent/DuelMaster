#pragma once
#ifndef __Carte_h__
#define __Carte_h__
#include "ElementDuel.h"

class Carte : public ElementDuel
{
protected:
	//VueListeCarte position;

public:
	Carte();
	~Carte();

	void clone() override;
	virtual void utiliser() = 0;

};




#endif