#ifndef LOADCOMMANDE__H
#define LOADCOMMANDE__H

#include "Commande.h"

/// class LoadCommande - 
class LoadCommande : public Commande {
  // Attributes
protected:
  std::string  file_name;
  // Operations
public:
  LoadCommande (char* f);
  std::string  getFileName ();
};

#endif
