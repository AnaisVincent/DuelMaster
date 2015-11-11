#pragma once
#include <map>
#include "Commande.h"
#ifndef __CommandeSet_h__
#define __CommandeSet_h__

class CommandeSet
{

protected:
	std::map<int, Commande*> commands;

public:
	~CommandeSet();

	int const size();
	Commande* const get(int category);
	void set(Commande* cmd);
	void take(CommandeSet& commands,bool replace);

};


#endif
