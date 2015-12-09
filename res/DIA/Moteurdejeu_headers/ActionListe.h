#ifndef ACTIONLISTE__H
#define ACTIONLISTE__H

#include "Action.h"

/// class ActionListe - 
class ActionListe {
  // Associations
  // Attributes
protected:
  int  nombre_actions;
  // Operations
public:
  ActionListe ();
  ~ActionListe ();
  int const  size ();
  bool  getPermission (int i);
  void  apply ();
  void  setPermission (int i, bool boolean);
  void  undo ();
  void  add (Action* action);
  void  remove (int i);
  void  addApply (Action* action);
};

#endif
