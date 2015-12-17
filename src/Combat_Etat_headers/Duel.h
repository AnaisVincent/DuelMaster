#ifndef DUEL__H
#define DUEL__H


namespace Duel {

  /// class ElementDuel - 
  class ElementDuel {
    // Attributes
  protected:
    int  attaque;
    bool  utilisation;
    int  cout;
    // Operations
  public:
    ElementDuel ();
    ~ElementDuel ();
    virtual void  clone () = 0;
    int const  getAttaque ();
    int const  getCout ();
    void  setAttaque (int a);
    void  setCout (int c);
  };

  /// class Carte - 
  class Carte : public Duel::ElementDuel {
    // Operations
  public:
    Carte ();
    ~Carte ();
    virtual void  clone () = 0;
    virtual void  utiliser () = 0;
  };

  /// class Soldat - 
  class Soldat : public Duel::Carte {
    // Operations
  public:
    Soldat ();
    ~Soldat ();
    void  utiliser ();
  };

  /// class Arme - 
  class Arme : public Duel::Carte {
    // Attributes
  private:
    int  durabilitite;
    // Operations
  public:
    Arme ();
    ~Arme ();
    void  clone ();
    void  utiliser ();
  };

  /// class Pouvoir - 
  class Pouvoir : public Duel::ElementDuel {
    // Operations
  public:
    Pouvoir ();
    ~Pouvoir ();
    void  clone ();
    void  utiliser ();
  };

  enum VueListeCartes {
    PIOCHE     = 1,
    MAIN     = 2,
    TERRAIN     = 3,
    CIMETIERE     = 4
  };

  /// class EtatDuel - 
  class EtatDuel {
    // Associations
    // Attributes
  private:
    int  points_combat;
    int  points_vie;
    Carte* liste_cartes;
    int  tour;
    int  compteur_pioche;
    // Operations
  public:
    EtatDuel ();
    ~EtatDuel ();
    void  utiliser ();
  };

};

#endif
