#pragma once
#ifndef __Comportement_h__
#define __Comportement_h__


class Comportement
{
protected:

	
public:
	Comportement();
	~Comportement();
	virtual void random() = 0;
	virtual void smarter() = 0;


};

#endif