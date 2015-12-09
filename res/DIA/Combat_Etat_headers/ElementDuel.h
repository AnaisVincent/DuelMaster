#ifndef ELEMENTDUEL__H
#define ELEMENTDUEL__H

/// class ElementDuel - 
class ElementDuel {
  // Attributes
protected:
  int  attaque;
  bool  utilisation;
  int  cout;
  // Operations
public:
  ElementDuel ();
  ~ElementDuel ();
  virtual virtual void  clone () = 0;
  int const  getAttaque ();
  int const  getCout ();
  void  setAttaque (int a);
  void  setCout (int c);
};

#endif
