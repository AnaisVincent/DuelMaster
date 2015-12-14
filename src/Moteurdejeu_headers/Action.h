#pragma once
#ifndef __Action_h__
#define __Action_h__

class Action
{


public:
	~Action();

	virtual void apply() = 0;
	//void undo(etat::Etat& s, bool notify);

};


#endif
