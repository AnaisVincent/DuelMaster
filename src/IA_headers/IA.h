#ifndef IA__H
#define IA__H


namespace IA {

  /// class Comportement - 
  class Comportement {
    // Operations
  public:
    Comportement ();
    ~Comportement ();
    virtual void  random () = 0;
    virtual void  smarter () = 0;
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

  /// class IA_classe - 
  class IA_classe {
    // Associations
    // Attributes
  protected:
    Exploration::Etat* s;
    Moteur_de_Jeu::Moteur  moteur;
    // Operations
  public:
    IA_classe ();
    IA_classe (Moteur_de_Jeu::Moteur moteur);
    ~IA_classe ();
    virtual void  addComportement (Comportement* behavior) = 0;
    virtual Moteur_de_Jeu::DirectionCommande* createDirectionCommande () = 0;
  };

  /// class IA_DuellisteSimple - 
  class IA_DuellisteSimple : public IA::IA_classe {
    // Operations
  public:
    IA_DuellisteSimple ();
    ~IA_DuellisteSimple ();
  };

  /// class IA_RivalSimple - 
  class IA_RivalSimple : public IA::IA_classe {
    // Operations
  public:
    IA_RivalSimple ();
    ~IA_RivalSimple ();
    void  addComportement (Comportement* behavior);
    Moteur_de_Jeu::DirectionCommande* createDirectionCommande ();
  };

};

#endif
