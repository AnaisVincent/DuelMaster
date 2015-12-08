#include "ComportementDeplacement.h"

ComportementDeplacement::ComportementDeplacement()
{
}

ComportementDeplacement::~ComportementDeplacement()
{
}

void ComportementDeplacement::random()
{
}


void ComportementDeplacement::smarter()
{
	int x = 0;//perso.getX();
	int y = 0;//perso.getY();
	int rx = 0;//rival.getX();
	int ry = 0;//rival.getY();

	if ((x - rx)*(x - rx) < (y - ry)*(y - ry)) {
		if (y < ry) {
			//aller à gauche
		}
		if (ry < y) {
			//aller à droite
		}

	}
	if ((x - rx)*(x - rx) >(y - ry)*(y - ry)) {
		if (x < rx) {
			//aller en bas
		}
		if (rx < x) {
			//aller en haut
		}
	}
}

void ComportementDeplacement::promenade()
{
}

void ComportementDeplacement::stalker()
{
}
