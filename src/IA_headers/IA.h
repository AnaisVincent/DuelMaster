#ifndef IA__H
#define IA__H

#include "../Moteurdejeu_headers/Moteur_de_Jeu.h"
#include "../Carte_Etat_headers/Exploration.h"

namespace IA {

	enum OrderType {
		IDLE,
		MOVE_UP,
		MOVE_DOWN,
		MOVE_LEFT,
		MOVE_RIGHT,
		ATTACK
	};

  /// class Comportement - 
  class Comportement {
    // Operations
  public:
    Comportement ();
    ~Comportement ();
    virtual int  random () = 0;
    virtual int  smarter () = 0;
  };

  /// class ComportementDeplacement - 
  class ComportementDeplacement : public IA::Comportement {
    // Operations
  public:
    ComportementDeplacement ();
    ~ComportementDeplacement ();
    int  random ();
	int  smarter ();
	int  promenade ();
	int  stalker ();
  };

  /// class IA_classe - 
  class IA_classe {
    // Associations
    // Attributes
  protected:
    Exploration::Etat* s;
    Moteur_de_Jeu::Moteur  moteur;
	OrderType order;
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
    //void  addComportement (Comportement* behavior);
    Moteur_de_Jeu::DirectionCommande* createDirectionCommande ();
  };


};

#endif
