#pragma once
#ifndef __Soldat_h__
#define __Soldat_h__
#include "Carte.h"

class Soldat : public Carte
{
protected:
	//VueListeSoldat position;

public:
	Soldat();
	~Soldat();

	void utiliser() override;

};




#endif