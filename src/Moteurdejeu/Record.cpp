#include "../Moteurdejeu_headers/Moteur_de_Jeu.hpp"

using namespace Moteur_de_Jeu;

/*Record::Record(etat::Etat& s)
{
	this->s = s;
}*/

Record::~Record() {}

void Record::clear()
{
}

void Record::startRecord()
{
}

void Record::recordOne(ActionListe * actions)
{
}

void Record::stopRecord()
{
}

void Record::startReplay()
{
}

bool Record::replayOne()
{
	return true;
}

void Record::startRollBack()
{
}

bool Record::rollBackOne()
{
	return true;
}
