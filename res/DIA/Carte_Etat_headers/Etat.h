#ifndef ETAT__H
#define ETAT__H

#include "ElementGrille.h"
#include "ElementListe.h"

/// class Etat - 
class Etat {
  // Associations
  // Attributes
protected:
  ElementListe* chars;
  ElementGrille* grid;
  Map* map;
  int  epoch;
  float  epochRate;
  // Operations
public:
  Etat ();
  ~Etat ();
  void  copy (Etat* other);
  bool const  equals (Etat* other);
  int const  getEpoch ();
  float const  getEpochRate ();
  Map* getMap ();
  void  setElementFactory (ElementFabrique* f);
  void  setEpoch (int time);
  void  setEpochRate (float rate);
  void  setGrid (ElementGrille* grid);
  void  setChars (ElementListe* list);
  void  loadLevel (char* file_name);
};

#endif
