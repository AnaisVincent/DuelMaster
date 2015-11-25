#pragma once
#include "MobileElement.h"
#ifndef __Villageois_h__
#define __Villageois_h__


class Villageois : public MobileElement
{
public:	enum enumVillageois { NORMAL, COMBAT };

private:
	enumVillageois typeVillageois; // 1 = normal, 2 = combat


public:
	Villageois();
	Villageois(enumVillageois);
	~Villageois();

	int const getTypeId() override;
	enumVillageois const getTypeVillageois();
	bool const isPersonnage() override;
	void clone() override;



};





#endif