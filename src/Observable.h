#pragma once
#ifndef __Observable_h__
#define __Observable_h__
#include <vector>
#include "EtatObserver.h"

class Observable
{
private:
	std::list<EtatObserver*> m_list;

	typedef std::list<EtatObserver*>::iterator iterator;
	typedef std::list<EtatObserver*>::const_iterator const_iterator;

public:
	void AddObs(EtatObserver* obs);
	void DelObs(EtatObserver* obs);

	virtual int Statut(void) const = 0;
	virtual ~Observable();

protected:
	void Notify(void);

};

#endif

