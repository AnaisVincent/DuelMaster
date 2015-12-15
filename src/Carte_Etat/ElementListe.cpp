#include "../Carte_Etat_headers/Exploration.hpp"
//#include "../Carte_Etat_headers/Etat.h"

using namespace Exploration;

ElementListe::ElementListe()
{
	
}

ElementListe::ElementListe(Etat * s)
{
	this->s = s;
}

ElementListe::~ElementListe()
{
}

const ElementListe ElementListe::clone()
{
	return ElementListe();
}

void ElementListe::copy(const ElementListe * liste)
{
	this->elements = liste->elements;
	this->fabrique = liste->fabrique;
	this->s = liste->s;
}

bool const ElementListe::equals(const ElementListe * other)
{
	if (other->elements == elements && other->fabrique == fabrique && other->s == s)
		return true;
	return false;
}

const Etat * const ElementListe::getEtat()
{
	return s;
}

int const ElementListe::size()
{
	return elements.size();
}

Element * const ElementListe::get(int i)
{
	return elements[i];
}

void ElementListe::clear()
{
	elements.clear();
}

void ElementListe::setElementFabrique(ElementFabrique * fabrique)
{
	this->fabrique = fabrique;
}

void ElementListe::set(int i, Element * e)
{
	elements[i] = e;
}

void const ElementListe::notifyObservers(int i)
{
	
}
