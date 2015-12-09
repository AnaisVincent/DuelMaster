#pragma once
#include "Commande.h"
#include "Moteur.h"
#ifndef __ModeCommande_h__
#define __ModeCommande_h__

class ModeCommande : public Commande
{

protected:
	Moteur::MoteurMode mode;

public:
	ModeCommande(Moteur::MoteurMode mode);

	virtual int const getCategory() override;
	virtual CommandeTypeId const getTypeId() override;
	Moteur::MoteurMode const getMode();

};


#endif
