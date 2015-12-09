#ifndef ELEMENTGRILLE__H
#define ELEMENTGRILLE__H

#include "ElementListe.h"

/// class ElementGrille - 
class ElementGrille : public ElementListe {
  // Attributes
protected:
  int  width;
  int  height;
  // Operations
public:
  ElementGrille ();
  ElementGrille (Etat* s);
  const ElementGrille* clone ();
  void  copy (ElementGrille* other);
  bool const  equals (ElementGrille* other);
  bool const  hasCell (int i, int j);
  int const  getWidth ();
  int const  getHeight ();
  void  isSpace (int i, int j, Element::Direction d);
  void  setCell (int i, int j, Element* e);
  void  load (char* file_name);
  void const  notifyObservers (int i, int j);
};

#endif
