#ifndef SERVER__H
#define SERVER__H


namespace server {

  /// class ServerObserver - 
  class ServerObserver {
    // Operations
  public:
    ServerObserver ();
    void serverChanged (const ServerEvent& servent);
  };

  enum ServerEvent {
    INVALID     = 0,
    STATE_CHANGED     = 1
  };

  /// class Observable - 
  class Observable {
    // Associations
    // Attributes
  protected:
    mutable std::vector<ServerObserver*> observers;
    // Operations
  public:
    virtual Observable (HttpStatus status, std::String msg) = 0;
    void const registerObserver (ServerObserver* o);
    void const unregisterObserver (ServerObserver o);
    void const notifyObserver (ServerEvent& e);
  };

  /// class Server - 
  class Server : public server::Observable {
    // Attributes
  public:
    std:thread* mainThread;
  protected:
    moteur_de_jeu::Moteur eng;
    // Operations
  public:
    Server ();
    virtual ~Server ();
    moteur_de_jeu::Moteur& getMoteur ();
    void addCommand (Moteur_de_Jeu::Command* com);
    virtual void run () = 0;
    void runBackground ();
    void join ();
  };

  /// class LocalServer - 
  class LocalServer : public server::Server {
    // Attributes
  protected:
    IA::IA_classe behaviorFactory;
    IA_classe* ias;
    // Operations
  public:
    LocalServer ();
    ~LocalServer (int id);
    void run ();
  };

};

#endif
