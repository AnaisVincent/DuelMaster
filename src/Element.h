#pragma once
#ifndef __Element_h__
#define __Element_h__

class Element
{

public: enum Direction { NORD, SUD, EST, OUEST };

protected:
	enum enumObstacle { VILLAGEOIS, PERSONNAGE, OBSTACLE, ESPACE };
	int x;
	int y;
	Direction orientation;


public:
	Element();
	~Element();

	virtual int const getTypeId() = 0;
	virtual bool const isStatic() = 0;
	virtual void clone() = 0;
	int const getX();
	int const getY();
	Direction const getOrientation();
	void setX(int x);
	void setY(int x);
	void setOrientation(Direction dir);

};




#endif