#ifndef SERVER__H
#define SERVER__H

#include <iostream>
#include <vector>
#include <thread>
#include "../Moteurdejeu_headers/Moteur_de_Jeu.h"
#include "../IA_headers/IA.h"
#include "../Service_headers/Service.h"

namespace server {

	enum ServerEvent {
		INVALID = 0,
		STATE_CHANGED = 1
	};
	
	/// class ServerObserver - 
  class ServerObserver {
    // Operations
  public:
    ServerObserver ();
    void serverChanged (const ServerEvent& servent);
  };

  /// class Observable - 
  class Observable {
    // Associations
    // Attributes
  protected:
    mutable std::vector<ServerObserver*> observers;
    // Operations
  public:
    Observable (Service::HttpStatus status, std::string msg);
    void const registerObserver (ServerObserver* o);
    void const unregisterObserver (ServerObserver o);
    void const notifyObserver (ServerEvent& e);
  };

  /// class Server - 
  class Server : public server::Observable {
    // Attributes
  public:
    std::thread* mainThread;
  protected:
    Moteur_de_Jeu::Moteur eng;
    // Operations
  public:
    Server ();
    virtual ~Server ();
    Moteur_de_Jeu::Moteur& getMoteur ();
    void addCommand (Moteur_de_Jeu::Commande* com);
    virtual void run () = 0;
    void runBackground ();
    void join ();
  };

  /// class LocalServer - 
  class LocalServer : public server::Server {
    // Attributes
  protected:
    IA::IA_RivalSimple behaviorFactory;
	IA::IA_RivalSimple* ias;
    // Operations
  public:
    LocalServer ();
    ~LocalServer ();
    void run ();
  };

};

#endif
