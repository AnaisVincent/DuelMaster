#pragma once
#include "Comportement.h"
#ifndef __ComportementDeplacement_h__
#define __ComportementDeplacement_h__


class ComportementDeplacement : public Comportement
{
protected:

	
public:
	ComportementDeplacement();
	~ComportementDeplacement();
	int random() override;
	int smarter() override;
	int promenade();
	int stalker();

};

#endif