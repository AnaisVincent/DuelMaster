#ifndef COMMANDESET__H
#define COMMANDESET__H

#include "Commande.h"

/// class CommandeSet - 
class CommandeSet {
  // Associations
  // Operations
public:
  ~CommandeSet ();
  int const  size ();
  void  set (Commande* cmd);
  void  pop ();
};

#endif
