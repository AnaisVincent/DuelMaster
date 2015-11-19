#include "Moteur.h"

void Moteur::swapCommands()
{
}

void Moteur::setMode(MoteurMode mode)
{
	this->enginemode = mode;
}

void Moteur::loadLevel(const char * file_name)
{
}

Moteur::Moteur()
{
}

Moteur::~Moteur()
{
}

Moteur::MoteurMode const Moteur::getMode()
{
	return enginemode;
}

void Moteur::addCommands(Commande * cmd)
{
	waitingCommands->set(cmd);
}

void Moteur::takeCommands(CommandeSet * commands)
{
	waitingCommands = commands;
}

/*std::mutex & const Moteur::getUpdateMutex()
{
	return update_mutex;
}*/

bool Moteur::update(int64_t time, int64_t * next_time)
{
	lastUpdateTime = time;
	return false;
}
