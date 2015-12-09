#ifndef SURFACEWORLD__H
#define SURFACEWORLD__H

#include "StaticTuile.h"
#include "Surface.h"

/// class SurfaceWorld - 
class SurfaceWorld : public Surface {
  // Attributes
private:
  sf::Texture  texture;
  sf::VertexArray  vertices;
  sf::Vertex* quad;
  int  spriteCount;
  int  arrayWidth;
  // Operations
public:
  SurfaceWorld ();
  ~SurfaceWorld ();
  void  clear ();
  void  loadTexture (char* image_file);
  void  setArrayWidth (int w);
  void  setSprite (StaticTuile tex, std::vector&lt;int&gt; tuiles);
  void  setSpriteCount (int n);
  void  setSpriteLocation (int i, int x, int y);
  void  setSpriteTexture (int i, StaticTuile tex);
  void  draw (sf::RenderTarget&amp; target, sf::RenderStates states);
};

#endif
