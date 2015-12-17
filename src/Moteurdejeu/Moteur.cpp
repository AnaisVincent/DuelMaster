#include "../Moteurdejeu_headers/Moteur_de_Jeu.hpp"

using namespace Moteur_de_Jeu;

void Moteur::swapCommands()
{
}

void Moteur::setMode(MoteurMode mode)
{
	this->enginemode = mode;
}

void Moteur::loadLevel(char * file_name)
{
}

void Moteur::exec()
{
	std::cout << "execution du moteur";
	unsigned int i = 0; int dimTuile = 32;
	//while (enginemode != CLOSE) {
		if (enginemode == PLAY){
			std::cout << " || mode : PLAY";
			std::vector<Commande*> temp = takeCommands(commands);
			for (i = 0; i < temp.size(); i++) {
				if (temp[i]->getTypeId() == CommandeTypeId::DIRECTION){
					std::cout << " || commande de type direction recue" << std::endl;
					MoveCharacter action = MoveCharacter();
					if (dynamic_cast<DirectionCommande*>(temp[i])->getDirection() == Exploration::EST) {
						if(dynamic_cast<DirectionCommande*>(temp[i])->getCharacter() == 0)
							action = MoveCharacter(dimTuile, 0, perso);
						if (dynamic_cast<DirectionCommande*>(temp[i])->getCharacter() == 1)
							action = MoveCharacter(dimTuile, 0, rival);
						actions->add(&action);
						// check if action is true
						if (perso->getX() < (currentState.getMap()->getwidth() - 1)*dimTuile && ruler.collisions(perso->getX()/dimTuile + 1, perso->getY()/dimTuile)) // le personnage ne peut pas aller hors de l'ecran; par défaut, permission=false
						actions->setPermission(actions->size(), true);
						else
						actions->setPermission(actions->size(), false);
					}
					else if (dynamic_cast<DirectionCommande*>(temp[i])->getDirection() == Exploration::OUEST) {
						if (dynamic_cast<DirectionCommande*>(temp[i])->getCharacter() == 0)
							action = MoveCharacter(-dimTuile, 0, perso);
						if (dynamic_cast<DirectionCommande*>(temp[i])->getCharacter() == 1)
							action = MoveCharacter(-dimTuile, 0, rival);
						actions->add(&action);
						// check if action is true
						if (perso->getX() > 0 && ruler.collisions(perso->getX() / dimTuile - 1, perso->getY() / dimTuile))
						actions->setPermission(actions->size(), true);
						else
						actions->setPermission(actions->size(), false);
					}
					else if (dynamic_cast<DirectionCommande*>(temp[i])->getDirection() == Exploration::NORD) {
						if (dynamic_cast<DirectionCommande*>(temp[i])->getCharacter() == 0)
							action = MoveCharacter(0, -dimTuile, perso);
						if (dynamic_cast<DirectionCommande*>(temp[i])->getCharacter() == 1)
							action = MoveCharacter(0, -dimTuile, rival);
						actions->add(&action);
						// check if action is true
						if (perso->getY() > 0 && ruler.collisions(perso->getX() / dimTuile, perso->getY() / dimTuile - 1))
						actions->setPermission(actions->size(), true);
						else
						actions->setPermission(actions->size(), false);
					}
					else if (dynamic_cast<DirectionCommande*>(temp[i])->getDirection() == Exploration::SUD) {
						if (dynamic_cast<DirectionCommande*>(temp[i])->getCharacter() == 0)
							action = MoveCharacter(0, dimTuile, perso);
						if (dynamic_cast<DirectionCommande*>(temp[i])->getCharacter() == 1)
							action = MoveCharacter(0, dimTuile, rival);
						actions->add(&action);
						// check if action is true
						if (perso->getY() < (currentState.getMap()->getheight() - 1)*dimTuile && ruler.collisions(perso->getX() / dimTuile, perso->getY() / dimTuile + 1))
						actions->setPermission(actions->size(), true);
						else
						actions->setPermission(actions->size(), false);
					}
					std::cout << actions->size() << std::endl;
					//actions.apply();
					commands->pop();
				}
					
			}
		}
	//}
}

Exploration::Personnage* Moteur::getPerso()
{
	return perso;
}

Exploration::Personnage* Moteur::getRival()
{
	return rival;
}

ActionListe* Moteur::getActions()
{
	return actions;
}

Moteur::Moteur()
{
	commands = new CommandeSet();
	actions = new ActionListe();
	currentState = Exploration::Etat();
	ruler = Ruler(actions, &currentState, commands);
}

Moteur::Moteur(Exploration::Personnage* perso, Exploration::Personnage* rival)
{
	commands = new CommandeSet();
	actions = new ActionListe();
	this->perso = perso;
	this->rival = rival;
	currentState = Exploration::Etat();
	ruler = Ruler(actions, &currentState, commands);

}

Moteur::~Moteur()
{
}

MoteurMode const Moteur::getMode()
{
	return enginemode;
}

Exploration::Etat * Moteur::getState()
{
	return &currentState;
}

void Moteur::addCommands(Commande * cmd)
{
	std::cout << "ajout d'une commande dans le moteur :";
	commands->set(cmd);
	std::cout << " check" << std::endl;
}

std::vector<Commande*> Moteur::takeCommands(CommandeSet * commands)
{
	return commands->take();

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
