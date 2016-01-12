#include "..\Service_headers\Service.h"

Service::CommandeDB::CommandeDB() : idseq(1) {
    
}

const Service::Commande2* Service::CommandeDB::getCommande (int id) const {
    auto ite = commandes.find(id);
    if (ite == commandes.cend())
        return nullptr;
    return ite->second.get();
}

int Service::CommandeDB::addCommande (std::unique_ptr<Commande2> commande) {
    int id = idseq++;
    commandes.insert(std::make_pair(id,std::move(commande)));
    return id;
}

void Service::CommandeDB::setCommande (int id, std::unique_ptr<Commande2> commande) {
    commandes[id] = std::move(commande);
    if (id > idseq) {
        idseq = id;
    }
}

void Service::CommandeDB::removeCommande (int id) {
    auto ite = commandes.find(id);
    if (ite == commandes.end())
        return;
    commandes.erase(ite);
}


