#pragma once
#include <vector>
#include <iostream>
#include "Commande.h"
#include "DirectionCommande.h"
#ifndef __CommandeSet_h__
#define __CommandeSet_h__

class CommandeSet
{

protected:
	std::vector<Commande*> commands;

public:
	~CommandeSet();

	int const size();
	Commande* const get(int category);
	void set(Commande* cmd);
	void pop();
	std::vector<Commande*> take();

};


#endif
