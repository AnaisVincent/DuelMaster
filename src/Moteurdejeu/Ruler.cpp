#include "Ruler.h"

void Ruler::moveChar(int idx)
{
}

void Ruler::resChar(int idx)
{
}

Ruler::Ruler(int width, int height)
{
	h = height;
	w = width;
}

Ruler::Ruler(ActionListe* actions, const Etat * s, const CommandeSet* commands)
{
	this->actions = actions;
	this->currentState = s;
	this->commands = commands;
}

Ruler::~Ruler()
{
}

bool Ruler::collisions(int dx, int dy, int numdir, const int* level)
{
	int x = dy*w + dx;

	if (numdir == 2 && (x - w) >= 0) { //vers le haut
		if (level[x - w] < 21 || (23 < level[x - w] && level[x - w]< 29) || level[x - w] > 51) {
			std::cout << "ChocHaut!" << std::endl;
			return false; //tu ne peux pas passer
		}
	}

	else if (numdir == 3 && (x + w) <= w*h) { //vers le bas
		if (level[x + w] < 21 || (23 < level[x + w] && level[x + w]< 29) || level[x + w] > 51) {
			std::cout << "ChocBas! " << std::endl;
			return false; //tu ne peux pas passer
		}
	}

	else if (numdir == 1 && (x - 1) >= 0) { //vers la gauche
		if (level[x - 1] < 21 || (23 < level[x - 1] && level[x - 1]< 29) || level[x - 1] > 51) {
			std::cout << "ChocGauche!" << std::endl;
			return false; //tu ne peux pas passer
		}
	}

	else if (numdir == 0 && (x + 1) <= w*h) { //vers la droite
		if (level[x + 1] < 21 || (23 < level[x + 1] && level[x + 1]< 29) || level[x + 1] > 51) {
			std::cout << "ChocDroite!" << std::endl;
			return false; //tu ne peux pas passer
		}
	}

	return true; //tu peux passer
}

void Ruler::apply()
{
}
