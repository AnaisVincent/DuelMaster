#ifndef ETATEVENT__H
#define ETATEVENT__H

/// class EtatEvent - 
class EtatEvent {
  // Attributes
public:
  Etat  state;
  // Operations
public:
  EtatEvent (Etat&amp; s, EtatEventId id);
  ~EtatEvent ();
};

#endif
