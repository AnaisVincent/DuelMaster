#pragma once
#ifndef __Pouvoir_h__
#define __Pouvoir_h__
#include "ElementDuel.h"

class Pouvoir : public ElementDuel
{


public:
	Pouvoir();
	~Pouvoir();
	
	void clone() override;
	void utiliser();

};




#endif