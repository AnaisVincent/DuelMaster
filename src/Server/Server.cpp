#include "../Server_headers/server.h"

server::Server::Server()
{
}

server::Server::~Server()
{
}

Moteur_de_Jeu::Moteur & server::Server::getMoteur()
{
	return eng;
}

void server::Server::addCommand(Moteur_de_Jeu::Commande * com)
{
}

void server::Server::runBackground()
{
}

void server::Server::join()
{
}
