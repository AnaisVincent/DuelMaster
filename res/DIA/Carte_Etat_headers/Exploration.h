#ifndef EXPLORATION__H
#define EXPLORATION__H


namespace Exploration {

  /// class EtatObserver - 
  class EtatObserver {
  };

  /// class Observable - 
  class Observable {
    // Associations
    // Operations
  public:
    ~Observable ();
  };

  /// class AElementAlloc - 
  class AElementAlloc {
    // Operations
  public:
    virtual ~AElementAlloc ();
    virtual virtual Element* newInstance (char id) = 0;
  };

  /// class ElementFabrique - 
  class ElementFabrique {
    // Associations
    // Operations
  public:
    ~ElementFabrique ();
    void  registerType (char id, AElementAllo c);
  };

  /// class MobileElement - 
  class MobileElement : public Exploration::Element {
    // Attributes
  protected:
    int  speed;
    int  position;
    Direction  direction;
    // Operations
  public:
    MobileElement ();
    ~MobileElement ();
    bool const  isStatic ();
    int const  getSpeed ();
    int const  getPosition ();
    Direction const  getDirection ();
    void  setSpeed (int s);
    void  setPosition (int p);
    void  setDirection (Direction dir);
    virtual bool isPersonnage () = 0;
  };

  enum Direction {
    Nord     = 1,
    Sud     = 2,
    Est     = 3,
    Ouest     = 4
  };

  enum TypeId {
    Villageois     = 1,
    Personnage     = 2,
    Espace     = 3,
    Obstacle     = 4
  };

  /// class Element - 
  class Element {
    // Associations
    // Attributes
  protected:
    int  x;
    int  y;
    Direction  orientation;
    // Operations
  public:
    Element ();
    ~Element ();
    virtual void  clone ();
    int const  getX ();
    int const  getY ();
    Direction const  getOrientation ();
    void  setX (int x);
    void  setY (int x);
    void  setOrientation (Direction dir);
    virtual int getTypeId () = 0;
    virtual bool isStatic () = 0;
  };

  /// class ElementListe - 
  class ElementListe : public Exploration::Observable {
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

  /// class ElementGrille - 
  class ElementGrille : public Exploration::ElementListe {
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

  enum EtatEventId {
    ALL_CHANGED     = 1,
    LEVEL_CHANGED     = 2,
    EPOCH_CHANGED     = 3
  };

  /// class EtatEvent - 
  class EtatEvent : public Exploration::EtatObserver {
    // Attributes
  public:
    Etat  state;
    // Operations
  public:
    EtatEvent (Etat&amp; s, EtatEventId id);
    ~EtatEvent ();
  };

  /// class Instruction - 
  class Instruction {
    // Operations
  public:
    Instruction ();
    ~Instruction ();
    virtual void  execute ();
  };

  /// class InstructionMvt - 
  class InstructionMvt : public Exploration::Instruction {
    // Associations
    // Attributes
  private:
    int  id;
    int  distance;
    Element::Direction  direction;
    // Operations
  public:
    InstructionMvt ();
    ~InstructionMvt ();
    void  execute ();
  };

  /// class StaticElement - 
  class StaticElement : public Exploration::Element {
    // Operations
  public:
    StaticElement ();
    ~StaticElement ();
    bool const  isStatic ();
    virtual bool isSpace () = 0;
  };

  enum TypeEspace {
    Vide     = 1,
    Cadeau     = 2
  };

  /// class Espace - 
  class Espace : public Exploration::StaticElement {
    // Associations
    // Attributes
  private:
    enumEspace  typeespace;
    // Operations
  public:
    Espace ();
    Espace (enumEspac e);
    ~Espace ();
    int const  getTypeId ();
    enumEspace const  getTypeEspace ();
    bool const  isSpace ();
    void  clone ();
  };

  /// class InstructionCombat - 
  class InstructionCombat : public Exploration::Instruction {
    // Operations
  public:
    InstructionCombat ();
    ~InstructionCombat ();
    void  execute ();
  };

  /// class Dialogue - 
  class Dialogue {
    // Associations
    // Operations
  public:
    Dialogue ();
    ~Dialogue ();
    void  execute ();
  };

  /// class Etat - 
  class Etat {
    // Associations
    // Attributes
  protected:
    ElementListe* chars;
    ElementGrille* grid;
    Map* map;
    int  epoch;
    float  epochRate;
    // Operations
  public:
    Etat ();
    ~Etat ();
    void  copy (Etat* other);
    bool const  equals (Etat* other);
    int const  getEpoch ();
    float const  getEpochRate ();
    Map* getMap ();
    void  setElementFactory (ElementFabrique* f);
    void  setEpoch (int time);
    void  setEpochRate (float rate);
    void  setGrid (ElementGrille* grid);
    void  setChars (ElementListe* list);
    void  loadLevel (char* file_name);
  };

  enum TypePersonnage {
    Joueur     = 1,
    Rival     = 2
  };

  /// class Personnage - 
  class Personnage : public Exploration::MobileElement {
    // Associations
    // Attributes
  private:
    enumPersonnage  typePersonnage;
    // Operations
  public:
    Personnage ();
    Personnage (enumPersonnag e);
    ~Personnage ();
    int const  getTypeId ();
    enumPersonnage const  getTypePersonnage ();
    bool const  isPersonnage ();
    void  clone ();
  };

  enum StatusVillageois {
    Normal     = 1,
    Combat     = 2
  };

  /// class Villageois - 
  class Villageois : public Exploration::MobileElement {
    // Associations
    // Attributes
  private:
    enumVillageois  typeVillageois;
    // Operations
  public:
    Villageois ();
    Villageois (enumVillageoi s);
    ~Villageois ();
    int const  getTypeId ();
    enumVillageois const  getTypeVillageois ();
    bool const  isPersonnage ();
    void  clone ();
  };

  /// class ElementAlloc - 
  class ElementAlloc : public Exploration::AElementAlloc {
    // Attributes
  protected:
    char  id;
    // Operations
  public:
    ElementAlloc (char id);
    Element* newInstance (char id);
  };

  /// class InstructionTexte - 
  class InstructionTexte : public Exploration::Instruction {
    // Attributes
  private:
    std::string  texte;
    // Operations
  public:
    InstructionTexte ();
    ~InstructionTexte ();
    void  execute ();
  };

  /// class Obstacle - 
  class Obstacle : public Exploration::StaticElement {
    // Attributes
  private:
    enumObstacle  typeObstacle;
    // Operations
  public:
    Obstacle ();
    Obstacle (enumObstacl e);
    ~Obstacle ();
    int const  getTypeId ();
    enumObstacle const  getTypeObstacle ();
    bool const  isSpace ();
    void  clone ();
  };

};

#endif
