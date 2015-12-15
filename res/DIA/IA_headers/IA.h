#ifndef IA__H
#define IA__H


namespace IA {

  /// class Comportement - 
  class Comportement {
    // Operations
  public:
    Comportement ();
    ~Comportement ();
    virtual virtual void  random () = 0;
    virtual virtual void  smarter () = 0;
  };

  /// class ComportementDeplacement - 
  class ComportementDeplacement : public IA::Comportement {
    // Operations
  public:
    ComportementDeplacement ();
    ~ComportementDeplacement ();
    void  random ();
    void  smarter ();
    void  promenade ();
    void  stalker ();
  };

  /// class IA - 
  class IA {
    // Associations
    // Attributes
  protected:
    Etat* s;
    Moteur  moteur;
    // Operations
  public:
    IA ();
    IA (Moteur moteur);
    ~IA ();
    virtual virtual void  addComportement (Comportement* behavior) = 0;
    virtual virtual DirectionCommande* createDirectionCommande () = 0;
  };

  /// class IA_DuellisteSimple - 
  class IA_DuellisteSimple : public IA::IA {
    // Operations
  public:
    IA_DuellisteSimple ();
    ~IA_DuellisteSimple ();
  };

  /// class IA_RivalSimple - 
  class IA_RivalSimple : public IA::IA {
    // Operations
  public:
    IA_RivalSimple ();
    ~IA_RivalSimple ();
    void  addComportement (Comportement* behavior);
    DirectionCommande* createDirectionCommande ();
  };

};

#endif
