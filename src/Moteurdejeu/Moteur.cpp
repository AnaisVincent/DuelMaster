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

const Etat * const Moteur::getState()
{
	return currentState;
}

void Moteur::addCommands(Commande * cmd)
{
	commands->set(cmd);
}

void Moteur::takeCommands(CommandeSet * commands)
{
	for (int i = 0; i < commands->take().size(); i++) {
		if (commands->take()[i])
			;
	}

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
