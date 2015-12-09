#ifndef ETATEVENT__H
#define ETATEVENT__H

#include "EtatEventId.h"
#include "EtatObserver.h"

/// class EtatEvent - 
class EtatEvent : public EtatObserver {
  // Attributes
public:
  Etat  state;
  // Operations
public:
  EtatEvent (Etat&amp; s, EtatEventId id);
  ~EtatEvent ();
};

#endif
