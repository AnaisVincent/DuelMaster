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
	void random() override;
	void smarter() override;
	void promenade();
	void stalker();

};

#endif