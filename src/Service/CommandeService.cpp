#include "..\Service_headers\Service.h"

Service::CommandeService::CommandeService(CommandeDB & commandeDB) : AbstractService("/commande"), commandeDB(commandeDB)
{
}

Service::HttpStatus Service::CommandeService::get(Json::Value& out, int id) const {
	const Commande2* commande = commandeDB.getCommande(id);
	if (!commande)
		throw ServiceException(HttpStatus::NOT_FOUND, "Invalid commande id");
	out["name"] = commande->name;
	out["id"] = commande->id;
	return HttpStatus::OK;
}

Service::HttpStatus Service::CommandeService::post(const Json::Value& in, int id) {
	const Commande2* commande = commandeDB.getCommande(id);
	if (!commande)
		throw ServiceException(HttpStatus::NOT_FOUND, "Invalid commande id");
	std::unique_ptr<Commande2> commandemod(new Commande2(*commande));
	if (in.isMember("name")) {
		commandemod->name = in["name"].asString();
	}
	if (in.isMember("id")) {
		commandemod->id = in["id"].asInt();
	}
	commandeDB.setCommande(id, std::move(commandemod));
	return HttpStatus::NO_CONTENT;
}

Service::HttpStatus Service::CommandeService::put(Json::Value& out, const Json::Value& in) {
	std::string name = in["name"].asString();
	int id = in["id"].asInt();
	out["id"] = commandeDB.addCommande(std::make_unique<Commande2>(name, id));
	return HttpStatus::CREATED;
}

Service::HttpStatus Service::CommandeService::remove(int id) {
	const Commande2* commande = commandeDB.getCommande(id);
	if (!commande)
		throw ServiceException(HttpStatus::NOT_FOUND, "Invalid commande id");
	commandeDB.removeCommande(id);
	return HttpStatus::NO_CONTENT;
}

