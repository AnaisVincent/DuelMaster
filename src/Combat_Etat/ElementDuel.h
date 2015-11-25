#pragma once
#ifndef __ElementDuel_h__
#define __ElementDuel_h__

class ElementDuel
{

protected:
	int attaque;
	bool utilisation;
	int cout;

public:
	ElementDuel();
	~ElementDuel();

	virtual void clone() = 0;
	int const getAttaque();
	int const getCout();
	void setAttaque(int a);
	void setCout(int c);

};




#endif