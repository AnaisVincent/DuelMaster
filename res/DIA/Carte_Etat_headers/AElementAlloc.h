#ifndef AELEMENTALLOC__H
#define AELEMENTALLOC__H

/// class AElementAlloc - 
class AElementAlloc {
  // Operations
public:
  virtual ~AElementAlloc ();
  virtual virtual Element* newInstance (char id) = 0;
};

#endif
