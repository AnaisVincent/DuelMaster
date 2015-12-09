#ifndef SURFACE__H
#define SURFACE__H

#include "StaticTuile.h"

/// class Surface - 
class Surface {
  // Attributes
private:
  sf::Texture  tuileset;
  // Operations
public:
  ~Surface ();
  virtual virtual void  clear () = 0;
  virtual virtual sf::Texture  getTexture () = 0;
  virtual virtual void  loadTexture (char* image_file) = 0;
  virtual virtual void  setSpriteCount (int n) = 0;
  virtual virtual void  setSpriteLocation (int i, int x, int y) = 0;
  virtual virtual void  setSpriteTexture (int i, StaticTuile tex) = 0;
};

#endif
