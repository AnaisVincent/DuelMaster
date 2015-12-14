#pragma once
#ifndef __Comportement_h__
#define __Comportement_h__
#include <cstdlib>


class Comportement
{
protected:

	
public:
	Comportement();
	~Comportement();
	virtual int random() = 0;
	virtual int smarter() = 0;


};

#endif