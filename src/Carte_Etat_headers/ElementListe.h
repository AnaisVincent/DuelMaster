#ifndef ELEMENTLISTE__H
#define ELEMENTLISTE__H

#include "Observable.h"
#include "ElementFabrique.h"
#include "Element.h"

/// class ElementListe - 
class ElementListe : public Observable {
  // Associations
  // Attributes
protected:
  Etat * s;
  ElementFabrique* fabrique;
  // Operations
public:
  ElementListe ();
  ElementListe (Etat* s);
  ~ElementListe ();
  const ElementListe  clone ();
  void  copy (ElementListe* liste);
  bool const  equals (ElementListe* other);
  int const  size ();
  void  clear ();
  void  setElementFabrique (ElementFabrique* fabrique);
  void  set (int i, Element* e);
  void const  notifyObservers (int i);
};

#endif
