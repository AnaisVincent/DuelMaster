#include "ActionListe.h"

ActionListe::ActionListe()
{
}

ActionListe::~ActionListe()
{
	nombre_actions = 0;
}

int const ActionListe::size()
{
	return this->nombre_actions;
}

Action * const ActionListe::get(int i)
{
	return this->actions[i];
}

bool ActionListe::getPermission(int i)
{
	return permission[i];
}

void ActionListe::apply()
{
	for(int i=0;i<nombre_actions;i++){
		
		if(permission[i]){

			actions[i]->apply();
		}
	}
	for(int i=0;i<nombre_actions;i++){
		remove(i);
	}
}

void ActionListe::undo()
{
}

void ActionListe::add(Action * action)
{
	this->actions[nombre_actions]=action;
	nombre_actions++;
}

void ActionListe::setPermission(int i, bool boolean)
{
	this->permission[i-1]=boolean;
}

void ActionListe::remove(int i)
{
	if(nombre_actions>0){
		int i=i;
		for(i=i;i<nombre_actions-1;i++){
			this->actions[nombre_actions]=this->actions[nombre_actions+1];
			this->permission[nombre_actions]=this->permission[nombre_actions+1];
		}
		nombre_actions--;
	}
	if(nombre_actions==0){
		this->permission[nombre_actions]=false;
	}
}

void ActionListe::addApply(Action * action)
{
	
}
