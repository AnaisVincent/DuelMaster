#include "../Combat_Etat_headers/Duel.hpp"

using namespace Duel;

ElementDuel::ElementDuel()
{
}

ElementDuel::~ElementDuel()
{
}

int const ElementDuel::getAttaque()
{
	return attaque;
}

int const ElementDuel::getCout()
{
	return cout;
}

void ElementDuel::setAttaque(int a)
{
	attaque = a;
}

void ElementDuel::setCout(int c)
{
	cout = c;
}
