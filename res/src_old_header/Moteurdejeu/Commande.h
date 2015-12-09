#pragma once
#ifndef __Commande_h__
#define __Commande_h__

class Commande
{

public:
	~Commande();

	enum CommandeCategorie { MAIN_CATEGORY, MOVE_CATEGORY, MODE_CATEGORY };
	enum CommandeTypeId { LOAD, MODE, DIRECTION };

	virtual int const getCategory() = 0;
	virtual CommandeTypeId const getTypeId() = 0;

protected:
	CommandeTypeId type_id;
	CommandeCategorie categorie;

};


#endif
