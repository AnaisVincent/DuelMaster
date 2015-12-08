#include "ComportementDeplacement.h"

ComportementDeplacement::ComportementDeplacement()
{
}

ComportementDeplacement::~ComportementDeplacement()
{
}

int ComportementDeplacement::random()
{
	int o;
	o = rand() % 5 + 1;
	return o;
}


int ComportementDeplacement::smarter()
{
	return 0;
}

int ComportementDeplacement::promenade()
{
	return 0;
}

int ComportementDeplacement::stalker()
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
	return 0;
}
