#ifndef MAP__H
#define MAP__H

/// class Map - 
class Map {
  // Attributes
protected:
  std::vector<int>  level;
  // Operations
public:
  Map ();
  ~Map ();
  void  levelMap ();
  void  levelDuel ();
  std::vector<int>  getlevel ();
  const int  getnumber (int x, int y);
  const int  getheight ();
  const int  getwidth ();
};

#endif
