#pragma once
#ifndef __EtatObserver_h__
#define __EtatObserver_h__

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

class Observable;

class EtatObserver {

protected:
	std::list<Observable*> m_list;
	typedef std::list<Observable*>::iterator iterator;
	typedef std::list<Observable*>::const_iterator const_iterator;
	virtual ~EtatObserver();

public:
	virtual void Update(const Observable* observable) const;

	void AddObs(Observable* obs);
	void DelObs(Observable* obs);
};

#endif
