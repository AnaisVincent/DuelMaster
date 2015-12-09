#ifndef COMPORTEMENT__H
#define COMPORTEMENT__H

/// class Comportement - 
class Comportement {
  // Operations
public:
  Comportement ();
  ~Comportement ();
  virtual virtual void  random () = 0;
  virtual virtual void  smarter () = 0;
};

#endif
