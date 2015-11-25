#pragma once
#ifndef __Observable_h__
#define __Observable_h__
#include <vector>

class Observable
{

protected:
	//std::vector<EtatObserver* mutable>;

public:
	~Observable();

	//void const registerObserver(EtatObserver* o);
	//void const unregisterObserver(EtatObserver* o);
	//void const notifyObservers(const EtatEvent& e);
};

#endif

