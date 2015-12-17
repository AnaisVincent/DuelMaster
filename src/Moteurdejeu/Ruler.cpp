#include "../Moteurdejeu_headers/Moteur_de_Jeu.hpp"

using namespace Moteur_de_Jeu;

void Ruler::moveChar(int idx)
{
}

void Ruler::resChar(int idx)
{
}

Ruler::Ruler()
{
}

Ruler::Ruler(int width, int height)
{
	h = height;
	w = width;
}

Ruler::Ruler(ActionListe* actions, Exploration::Etat * s, CommandeSet* commands)
{
	this->actions = actions;
	this->currentState = s;
	this->commands = commands;
}

Ruler::~Ruler()
{
}

bool Ruler::collisions(int x, int y)
{
	int z = currentState->getMap()->getnumber(x, y);
	if (z < 21 || (23 < z && z < 29) || z > 51) {
		std::cout << "Choc!";
		std::cout << " || numero de case concernee :" << z << std::endl;
		return false; //tu ne peux pas passer
	}
	else return true;

}

void Ruler::apply()
{
}
