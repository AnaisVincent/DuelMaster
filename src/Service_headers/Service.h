#ifndef SERVICE__H
#define SERVICE__H

#include <string.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <memory>
#include <json/json.h>
#include <map>

namespace Service {

  // énumération
  /// class HttpStatus - 
    // Attributes
	  enum HttpStatus {
		  OK = 200,
		  CREATED = 201,
		  NO_CONTENT = 204,
		  BAD_REQUEST = 400,
		  NOT_FOUND = 404,
		  SERVER_ERROR = 500,
		  NOT_IMPLEMENTED = 501
	  };

	  /// class ServiceException - 
	  class ServiceException : public std::exception {
		  // Associations
		  HttpStatus httpStatus;
		  // Attributes
	  protected:
		  std::string msg;
		  // Operations
	  public:
		  ServiceException(HttpStatus status, std::string msg);
		  HttpStatus status() const;
		  const char* what() const noexcept;
	  };




	  /// class AbstractService - 
	  class AbstractService {
		  // Attributes
	  protected:
		  std::string pattern;
		  // Operations
	  public:
		  AbstractService(const std::string& pattern);
		  virtual ~AbstractService();
		  const std::string& getPattern() const;
		  void setPattern(const std::string& pattern);
		  virtual HttpStatus get(Json::Value& out, int id) const;
		  virtual HttpStatus post(const Json::Value& in, int id);
		  virtual HttpStatus put(Json::Value& out, const Json::Value& in);
		  virtual HttpStatus remove(int id);
	  };




	  /// class ServicesManager - 
	  class ServicesManager {
		  // Associations
		  // Attributes
	  protected:
		  std::vector<std::unique_ptr<AbstractService> > services;
		  // Operations
	  public:
		  void registerService(std::unique_ptr<AbstractService> service);
		  AbstractService* findService(const std::string& url) const;
		  HttpStatus queryService(std::string& out, const std::string& in, const std::string& url, const std::string& method);
	  };



	  /// class VersionService - 
	  class VersionService : public AbstractService {
		  // Operations
	  public:
		  VersionService();
		  HttpStatus get(Json::Value& out, int id) const;
	  };


	  /// class CommandeDB - 
	  class CommandeDB {
		  // Associations
		  // Attributes
	  protected:
		  int idseq;
		  std::map<int, std::unique_ptr<Commande2> > commandes;
		  // Operations
	  public:
		  CommandeDB();
		  const Commande2* getCommande(int id) const;
		  int addCommande(std::unique_ptr<Commande2> commande);
		  void setCommande(int id, std::unique_ptr<Commande2> commande);
		  void removeCommande(int id);
	  };




	  /// class CommandeService - 
	  class CommandeService : public AbstractService {
		  // Associations
		  // Attributes
	  protected:
		  CommandeDB& commandeDB;
		  // Operations
	  public:
		  CommandeService(CommandeDB& commandeDB);
		  HttpStatus get(Json::Value& out, int id) const;
		  HttpStatus post(const Json::Value& in, int id);
		  HttpStatus put(Json::Value& out, const Json::Value& in);
		  HttpStatus remove(int id);
	  };


	  /// class Commande - 
	  class Commande2 {
		  // Attributes
	  public:
		  std::string name;
		  int id;
		  // Operations
	  public:
		  Commande2(std::string name, int id);
	  };

};

#endif
