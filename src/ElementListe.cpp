#include "ElementListe.h"

ElementListe::ElementListe(Etat & s)
{
	this->s = s;
}

ElementListe::~ElementListe()
{
}

void ElementListe::copy(const ElementListe & liste)
{
}

bool const ElementListe::equals(const ElementListe & other)
{
	return nullptr;
}

const Etat * const ElementListe::getEtat()
{
	return nullptr;
}

int const ElementListe::size()
{
	return 0;
}

Element * const ElementListe::get(int i)
{
	return nullptr;
}

void ElementListe::clear()
{
	
}

void ElementListe::setElementFabrique(ElementFabrique * fabrique)
{
}

void ElementListe::set(int i, Element * e)
{
}

void const ElementListe::notifyObservers(int i)
{
	
}
