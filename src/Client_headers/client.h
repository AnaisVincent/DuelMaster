#ifndef CLIENT__H
#define CLIENT__H

#include "server.h"

namespace client {

  /// class CacheEtatObserver - 
  class CacheEtatObserver {
    // Attributes
  protected:
    EtatObserver& observer;
    std::vector<exploration::EtatEvent*> events;
    // Operations
  public:
    virtual CacheEtatObserver (EtatObserver& o) = 0;
    virtual ~CacheEtatObserver ();
    void stateChanged (const exploration::EtatEvent& e);
    void flush ();
  };

  /// class Client - 
  class Client : public server::ServerObserver {
    // Associations
    // Attributes
  public:
    server::Server& serv;
    server::ServerEvent serverEvent;
    std::mutex caches_mutex;
    std::vector<CacheEtatObserver*> currentCaches;
  protected:
    std::vector<const Moteur_de_Rendu::TuileSetWorld*> tuilesets;
    // Operations
  public:
    Client (server::Server& server);
    virtual ~Client ();
    virtual void serverChanged (const server::ServerEvent& e) = 0;
    virtual void run () = 0;
  protected:
    virtual void init () = 0;
    void setTuileSet (Moteur_de_Rendu::ScenePlan sl, const Moteur_de_Rendu::TuileSet* tuilesets);
    virtual bool acquireControls () = 0;
    void stateChanged ();
    void updateDisplay ();
  };

  /// class SFMLClient - 
  class SFMLClient : public client::Client {
    // Attributes
  protected:
    sf::RenderWindow window;
    std::vector<sf::Surface*> surfaces;
    // Operations
  public:
    virtual SFMLClient (server::Server& server) = 0;
    virtual void init () = 0;
    bool acquireControls ();
    void stateChanged ();
    void updateDisplay ();
  };

};

#endif
