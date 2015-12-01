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

void Moteur::run()
{
	int i = 0;
	while (enginemode != CLOSE) {
		if (enginemode == PLAY){
			std::vector<Commande*> temp = takeCommands(commands);
			for (i = 0; i < temp.size(); i++)
				if (temp[i]->getTypeId() == Commande::DIRECTION)
					if (dynamic_cast<DirectionCommande*>(temp[i])->getDirection() == Element::EST) {
						MoveCharacter action = MoveCharacter(dimTuile, 0, &persos[0]);
						actions.add(&action);
						// check if action is true
						/*if (persos[0].getX() < (w - 1)*dimTuile && ruler.collisions(dx, dy, 0, level)) // le personnage ne peut pas aller hors de l'ecran; par défaut, permission=false
							actions.setPermission(actions.size(), true);
						else
							actions.setPermission(actions.size(), false);*/
					}
					else if (dynamic_cast<DirectionCommande*>(temp[i])->getDirection() == Element::OUEST) {
						MoveCharacter action = MoveCharacter(-dimTuile, 0, &persos[0]);
						actions.add(&action);
						// check if action is true
						/*if (perso.getX() > 0 && ruler.collisions(dx, dy, 1, level))
							actions.setPermission(actions.size(), true);
						else
							actions.setPermission(actions.size(), false);*/
					}
					else if (dynamic_cast<DirectionCommande*>(temp[i])->getDirection() == Element::NORD) {
						MoveCharacter action = MoveCharacter(0, -dimTuile, &persos[0]);
						actions.add(&action);
						// check if action is true
						/*if (perso.getY() > 0 && ruler.collisions(dx, dy, 2, level))
							actions.setPermission(actions.size(), true);
						else
							actions.setPermission(actions.size(), false);*/
					}
					else if (dynamic_cast<DirectionCommande*>(temp[i])->getDirection() == Element::SUD) {
						MoveCharacter action = MoveCharacter(0, dimTuile, &persos[0]);
						actions.add(&action);
						// check if action is true
						/*if (perso.getY() < (h - 1)*dimTuile && ruler.collisions(dx, dy, 3, level))
							actions.setPermission(actions.size(), true);
						else
							actions.setPermission(actions.size(), false);*/

					}
		}
	}
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

std::vector<Commande*> Moteur::takeCommands(CommandeSet * commands)
{
	std::vector<Commande*> temp;
	for (int i = 0; i < commands->take().size(); i++) 
		temp[i] = commands->take()[i];
	return temp;

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
