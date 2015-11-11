#pragma once
#ifndef __Commande_h__
#define __Commande_h__

class Commande
{

public:
	~Commande();

	enum CommandeCategorie { MAIN_CATEGORY, MOVE_CATEGORY, MODE_CATEGORY };
	enum CommandeTypeId { LOAD, MOVE, DIRECTION };

	virtual int const getCategory();
	virtual CommandeTypeId const getTypeId();

protected:
	CommandeTypeId type_id;
	CommandeCategorie categorie;

};


#endif
