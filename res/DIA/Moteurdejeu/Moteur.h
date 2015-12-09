#ifndef MOTEUR__H
#define MOTEUR__H

#include "MoteurMode.h"
#include "Ruler.h"
#include "CommandeSet.h"
#include "Record.h"
#include "ActionListe.h"

/// class Moteur - 
class Moteur : public Ruler {
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

#endif
