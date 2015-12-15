#ifndef MOTEUR_DE_JEU__H
#define MOTEUR_DE_JEU__H


namespace Moteur_de_Jeu {

  /// class Action - 
  class Action {
    // Operations
  public:
    ~Action ();
    virtual virtual void  apply () = 0;
  };

  /// class ActionListe - 
  class ActionListe {
    // Associations
    // Attributes
  protected:
    int  nombre_actions;
    // Operations
  public:
    ActionListe ();
    ~ActionListe ();
    int const  size ();
    bool  getPermission (int i);
    void  apply ();
    void  setPermission (int i, bool boolean);
    void  undo ();
    void  add (Action* action);
    void  remove (int i);
    void  addApply (Action* action);
  };

  enum CommandeCategorie {
    MAIN_CATEGORY     = 1,
    MOVE_CATEGORY     = 2,
    MODE_CATEGORY     = 3
  };

  enum CommandeTypeId {
    LOAD     = 1,
    MODE     = 2,
    DIRECTION     = 3
  };

  /// class Commande - 
  class Commande {
    // Associations
    // Attributes
  protected:
    CommandeTypeId  type_id;
    CommandeCategorie  categorie;
    // Operations
  public:
    ~Commande ();
    virtual int const getCategorie () = 0;
    virtual CommandeTypeId const getTypeId () = 0;
  };

  /// class LoadCommande - 
  class LoadCommande : public Moteur_de_Jeu::Commande {
    // Attributes
  protected:
    std::string  file_name;
    // Operations
  public:
    LoadCommande (char* f);
    std::string  getFileName ();
  };

  /// class ModeCommande - 
  class ModeCommande : public Moteur_de_Jeu::Commande {
    // Attributes
  protected:
    Moteur::MoteurMode  mode;
    // Operations
  public:
    ModeCommande (Moteur::MoteurMode mode);
  };

  /// class MoveCharacter - 
  class MoveCharacter : public Moteur_de_Jeu::Action {
    // Attributes
  protected:
    int  idx;
    int  dx;
    int  dy;
    Personnage* perso;
    // Operations
  public:
    MoveCharacter ();
    MoveCharacter (int idx);
    MoveCharacter (int dx, int dy, Personnage* perso);
    ~MoveCharacter ();
    int  getX ();
    int  getY ();
    int  getDX ();
    int  getDY ();
    void  apply ();
  };

  /// class DirectionCommande - 
  class DirectionCommande : public Moteur_de_Jeu::Commande {
    // Attributes
  protected:
    int  character;
    Element::Direction  direction;
    // Operations
  public:
    DirectionCommande (int c, Element::Direction d);
    int const  getCharacter ();
  };

  /// class Record - 
  class Record {
    // Attributes
  protected:
    int  idx;
    // Operations
  public:
    ~Record ();
    void  clear ();
    void  startRecord ();
    void  recordOne (ActionListe* actions);
    void  stopRecord ();
    void  startReplay ();
    bool  replayOne ();
    void  startRollBack ();
    bool  rollBackOne ();
  };

  /// class CommandeSet - 
  class CommandeSet {
    // Associations
    // Operations
  public:
    ~CommandeSet ();
    int const  size ();
    void  set (Commande* cmd);
    void  pop ();
  };

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

  enum MoteurMode {
    PLAY     = 1,
    RECORD     = 2,
    REPLAY     = 3,
    ROOLBACK     = 4,
    PAUSE     = 5,
    CLOSE     = 6
  };

  /// class Moteur - 
  class Moteur : public Moteur_de_Jeu::Ruler {
    // Associations
    // Attributes
  protected:
    ElementFabrique* factory;
    Etat  currentState;
    CommandeSet* commands;
    ActionListe  actions;
    Ruler  ruler;
    Personnage* perso;
    int64_t  lastUpdateTime;
    MoteurMode  enginemode;
    // Operations
  public:
    Moteur ();
    Moteur (Personnage* perso);
    ~Moteur ();
    MoteurMode const  getMode ();
    void  addCommands (Commande* cmd);
    bool  update (int64_t time, int64_t* next_time);
    void  swapCommands ();
    void  setMode (MoteurMode mode);
    void  loadLevel (char* file_name);
    void  exec ();
    Personnage* getPerso ();
  };

};

#endif
