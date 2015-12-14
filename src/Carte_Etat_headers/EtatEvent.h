#pragma once
#include "Etat.h"
#ifndef __EtatEvent_h__
#define __EtatEvent_h__

class EtatEvent
{

protected :
	enum EtatEventId {ALL_CHANGED, LEVEL_CHANGED, EPOCH_CHANGED, LIST_CHANGED};

public:

	const Etat state;

	EtatEvent(const Etat& s, EtatEventId id);
	~EtatEvent();

	bool const operator==(EtatEventId id);
	bool const operator!=(EtatEventId id);
	
};

#endif
