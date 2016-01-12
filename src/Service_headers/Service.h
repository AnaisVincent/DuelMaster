#ifndef SERVICE__H
#define SERVICE__H


namespace Service {

  // énumération
  /// class HttpStatus - 
  class HttpStatus {
    // Attributes
  public:
     OK;
     CREATED = 201;
     NO_CONTENT;
     BAD_REQUEST;
     NOT_FOUND;
     SERVER_ERROR;
     NOT_IMPLEMENTED;
  };

  /// class ServiceException - 
  class ServiceException {
    // Associations
    Service::HttpStatus httpStatus;
    // Attributes
  protected:
    std::String msg;
    // Operations
  public:
    ServiceException (HttpStatus status, std::String msg);
    HttpStatus const status ();
    const char* const what ();
  };

  /// class AbstractService - 
  class AbstractService {
    // Attributes
  protected:
    std::string pattern;
    // Operations
  public:
    AbstractService (const std::string& pattern);
    virtual ~AbstractService ();
    const std::string& const getPattern ();
    void setPattern (const std::string& pattern);
    virtual HttpStatus const get (Json::Value& out, int id) = 0;
    virtual HttpStatus post (const Json::Value& in, int id) = 0;
    virtual HttpStatus put (Json::Value& out, const Json::Value& in) = 0;
    virtual HttpStatus remove (int id) = 0;
  };

  /// class ServicesManager - 
  class ServicesManager {
    // Associations
    // Attributes
  protected:
    vector<unique_ptr<AbstractService>> services;
    // Operations
  public:
    void registerService (unique_ptr<AbstractService> service);
    AbstractService* const findService (const std::string& url);
    HttpStatus queryService (std::string& out, const std::string& in, const std::string& url, const std::string& method);
  };

  /// class VersionService - 
  class VersionService : public Service::AbstractService {
    // Operations
  public:
    VersionService ();
    HttpStatus const get (Json::Value& out, int id);
  };

  /// class CommandeDB - 
  class CommandeDB {
    // Attributes
  public:
    map<int,unique_ptr<Commande>> users;
  protected:
    int idseq;
    // Operations
  public:
    CommandeDB ();
    const Commande* const getCommande (int id);
    int addCommande (unique_ptr<Commande> commande);
    void setCommande (int id, unique_ptr<Commande> commande);
    void removeCommande (int id);
  };

  /// class CommandeService - 
  class CommandeService : public Service::AbstractService {
    // Associations
    // Attributes
  protected:
    CommandeDB& commandeDB;
    // Operations
  public:
    CommandeService (CommandeDB& commandeDB);
    HttpStatus const get (Json::Value& out, int id);
    HttpStatus post (const Json::Value& in, int id);
    HttpStatus put (Json::Value& out, const Json::Value& in);
    HttpStatus remove (int id);
  };

};

#endif
