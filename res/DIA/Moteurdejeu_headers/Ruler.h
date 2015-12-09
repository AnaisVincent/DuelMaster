#ifndef RULER__H
#define RULER__H

/// class Ruler - 
class Ruler {
  // Attributes
protected:
  Etat* currentState;
  CommandeSet* commands;
  ActionListe* actions;
  int  w;
  int  h;
  // Operations
public:
  Ruler ();
  Ruler (int width, int height);
  Ruler (ActionListe* actions, Etat* s, CommandeSet* commands);
  ~Ruler ();
  bool  collisions (int x, int y);
  void  apply ();
protected:
  void  moveChar (int idx);
  void  resChar (int idx);
};

#endif
