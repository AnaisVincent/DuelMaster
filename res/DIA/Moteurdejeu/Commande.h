#ifndef COMMANDE__H
#define COMMANDE__H

#include "CommandeCategorie.h"
#include "CommandeTypeId.h"

/// class Commande - 
class Commande {
  // Associations
  // Attributes
protected:
  CommandeTypeId  type_id;
  CommandeCategorie  categorie;
  // Operations
public:
  ~Commande ();
  virtual getCategorie () = 0;
  virtual getTypeId () = 0;
};

#endif
