#pragma once
#include "IA.h"
#ifndef __IA_RivalSimple_h__
#define __IA_RivalSimple_h__


class IA_RivalSimple : public IA
{
protected:

public:
	IA_RivalSimple();
	~IA_RivalSimple();
	void addComportement(Comportement* behavior) override;
	DirectionCommande* createDirectionCommande() override;

};

#endif
