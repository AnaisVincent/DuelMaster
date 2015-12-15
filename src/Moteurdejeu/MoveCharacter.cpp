#include "../Moteurdejeu_headers/Moteur_de_Jeu.hpp"

using namespace Moteur_de_Jeu;

MoveCharacter::MoveCharacter()
{
}

MoveCharacter::MoveCharacter(int idx)
{
	this->idx=idx;
}

MoveCharacter::MoveCharacter(int dx, int dy, Personnage* perso)
{

	this->dx=dx;
	this->dy=dy;
	this->perso=perso;
}

MoveCharacter::~MoveCharacter()
{
}


int MoveCharacter::getX(){
	return perso->getX();
}

int MoveCharacter::getY(){
	return perso->getY();
}

int MoveCharacter::getDX(){
	return this->dx;
}

int MoveCharacter::getDY(){
	return this->dy;
}

void MoveCharacter::apply(){
	perso->setX(perso->getX()+dx);
	perso->setY(perso->getY()+dy);
}


/*void MoveCharacter::setCoords(int dx, int dy, int dpos)
{
}*/
