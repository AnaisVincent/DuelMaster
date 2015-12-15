#ifndef IHM__H
#define IHM__H

namespace IHM {

  /// class PlayerController - 
  class PlayerController {
    // Attributes
  protected:
    Personnage  perso;
    sf::Event  event;
    // Operations
  public:
    PlayerController ();
    ~PlayerController ();
    DirectionCommande* moveCommande (sf::Event event);
  };

};

#endif
