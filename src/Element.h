#pragma once
#ifndef __Element_h__
#define __Element_h__

class Element
{
protected:
	int x;
	int y;
	//Direction orientation;


public:


	virtual int const getX();
	virtual int const getY();
	virtual void setX(int x);
	virtual void setY(int x);


};




#endif