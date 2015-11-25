#pragma once
#include "Commande.h"
#include <string>
#ifndef __LoadCommande_h__
#define __LoadCommande_h__

class LoadCommande : public Commande
{

protected:
	std::string file_name;

public:
	LoadCommande(const char* f);

	virtual int const getCategory() override;
	virtual CommandeTypeId const getTypeId() override;
	std::string getFileName();

};


#endif
