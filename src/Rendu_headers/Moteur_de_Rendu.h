#ifndef MOTEUR_DE_RENDU__H
#define MOTEUR_DE_RENDU__H

#include <vector>
#include "SFML/Graphics.hpp"

namespace Moteur_de_Rendu {

  /// class Tuile - 
  class Tuile {
    // Operations
  public:
    ~Tuile ();
    virtual bool const isAnimated () = 0;
  };

  /// class StaticTuile - 
  class StaticTuile : public Moteur_de_Rendu::Tuile {
    // Attributes
  protected:
    int  x;
    int  y;
    int  width;
    int  height;
    // Operations
  public:
	StaticTuile();
    StaticTuile (int x, int y, int width, int height);
    ~StaticTuile ();
    bool const  isAnimated ();
    int const  getX ();
    int const  getY ();
    int const  getWidth ();
    int const  getHeight ();
    void  setX (int x);
    void  setY (int x);
    void  setWidth (int x);
    void  setHeight (int x);
  };

  /// class Map - 
  class Map {
    // Attributes
  protected:
    std::vector<int>  level;
	int w;
	int h;
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

  /// class Surface - 
  class Surface {
	  // Attributes
  private:
	  sf::Texture  tuileset;
	  // Operations
  public:
	  ~Surface();
	  virtual void  clear() = 0;
	  sf::Texture  getTexture();
	  virtual void  loadTexture(char* image_file) = 0;
	  virtual void  setSpriteCount(int n) = 0;
	  virtual void  setSpriteLocation(int i, int x, int y) = 0;
	  virtual void  setSpriteTexture(int i, StaticTuile tex) = 0;
  };

  /// class Animation - 
  class Animation {
    // Associations
    // Attributes
  private:
    int  i;
  protected:
    int  x;
    int  y;
    Tuile* tuile;
    float  speed;
    int  start;
    // Operations
  public:
    Animation (int x, int y, Tuile* a);
    void  setSpeed (float speed);
    void  sync (int time);
    void  update (int time, Surface* surface);
  };

  /// class AnimatedTuile - 
  class AnimatedTuile : public Moteur_de_Rendu::Tuile {
    // Attributes
  protected:
    Tuile* tuiles;
    float  rate;
    // Operations
  public:
    AnimatedTuile (float rate);
    ~AnimatedTuile ();
    bool const  isAnimated ();
    float const  getRate ();
    int const  getTuileCount ();
    void  setRate (float rate);
    void  addTuile (Tuile* tuile);
    void  setTuile (int i, Tuile* tuile);
  };

  /// class TuileSet - 
  class TuileSet {
    // Associations
    // Operations
  public:
    ~TuileSet ();
    virtual int const getCellWidth () = 0;
    virtual int const getCellHeight () = 0;
  };

  /// class TuileSetWorld - 
  class TuileSetWorld : public Moteur_de_Rendu::TuileSet {
    // Attributes
  private:
    Tuile* tuiles;
	char* image_file = "../res/ExplorationPart/Textures/tileset.png";
    // Operations
  public:
    TuileSetWorld ();
    ~TuileSetWorld ();
    int const  getCellWidth ();
    int const  getCellHeight ();
	char * getImageFile();
  };

  /// class StateObserver - 
  class StateObserver {
  };

  /// class Plan - 
  class Plan : public Moteur_de_Rendu::StateObserver {
    // Associations
    // Attributes
  protected:
    Surface* surface;
    TuileSet* tuileset;
    // Operations
  public:
    Plan ();
    ~Plan ();
	const TuileSet * const getTuileSet();
    void  setTuileSet (TuileSet* tuileset);
    void  setSurface (Surface* surface);
    void  setAnimation (int i, Animation* a);
    void  printText (int x, int y, char* msg, int spriteIdx, int w, int h);
    void  sync (int time);
    void  update (int time);
  };

  /// class ElementListPlan - 
  class ElementListPlan : public Moteur_de_Rendu::Plan {
    // Operations
  public:
    ElementListPlan ();
    ~ElementListPlan ();
  };

  /// class StatePlan - 
  class StatePlan : public Moteur_de_Rendu::Plan {
    // Operations
  public:
    StatePlan ();
    ~StatePlan ();
  };

  /// class TuileSetChar - 
  class TuileSetChar : public Moteur_de_Rendu::TuileSet {
    // Attributes
  private:
    Tuile* tuiles;
	char* image_file = "../res/ExplorationPart/Sprites/PrPrincipal.png";
    // Operations
  public:
    TuileSetChar ();
    ~TuileSetChar ();
    int const  getCellWidth ();
    int const  getCellHeight ();
	const char * const getImageFile();
  };

  /// class DebugPlan - 
  class DebugPlan : public Moteur_de_Rendu::Plan {
    // Operations
  public:
    DebugPlan ();
    ~DebugPlan ();
    void  printGridValues (int* values, int n);
  };

  /// class SurfaceWorld - 
  class SurfaceWorld : public Moteur_de_Rendu::Surface, public sf::Drawable, public sf::Transformable{
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
    void  setSprite (StaticTuile tex, std::vector<int> tuiles);
    void  setSpriteCount (int n);
    void  setSpriteLocation (int i, int x, int y);
    void  setSpriteTexture (int i, StaticTuile tex);
    void  draw (sf::RenderTarget& target, sf::RenderStates states) const;
  };

  /// class Scene - 
  class Scene : public Moteur_de_Rendu::StateObserver {
    // Associations
    // Attributes
  protected:
    int  width;
    int  height;
    // Operations
  public:
    Scene ();
    ~Scene ();
    int const  getWidth ();
    int const  getHeight ();
    int const  getPlanCount ();
    void  setPlan (int idx, Plan* Plan);
    void  setSurface (int idx, Surface* surface);
    void  sync (int time);
    void  update (int time);
  };

  enum ScenePlan {
    GRID_PLAN     = 1,
    CHARS_PLAN     = 2,
    STATE_PLAN     = 3,
    DEBUG_PLAN     = 4
  };

};

#endif
