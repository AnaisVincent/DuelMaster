#pragma once
#include "MobileElement.h"
#ifndef __Personnage_h__
#define __Personnage_h__


class Personnage : public MobileElement
{
public: enum enumPersonnage { JOUEUR, RIVAL };

private:
	enumPersonnage typePersonnage; // 0 = joueur, 1 = rival


public:
	Personnage();
	Personnage(enumPersonnage);
	~Personnage();

	int const getTypeId() override;
	enumPersonnage const getTypePersonnage();
	bool const isPersonnage() override;
	void clone() override;



};





#endif