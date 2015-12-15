#include "../Moteurdejeu_headers/ActionListe.h"
#include <thread>

ActionListe::ActionListe()
{
	nombre_actions = 0;
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
	while (1) {
		//muti.lock();
		//for (int i = 0; i < nombre_actions; i++) {
		int temp = nombre_actions;
		for (int i = 0; i < temp; i++){
			if (permission[i]) {
				muti.lock();
				actions[0]->apply();
				remove(0);
				std::this_thread::sleep_for(std::chrono::milliseconds(100));
				muti.unlock();
				std::this_thread::sleep_for(std::chrono::milliseconds(30));
			}
		}

		/*for (int i = 0; i < nombre_actions; i++) {

			remove(i);
		}*/
		//muti.unlock();
		//std::this_thread::sleep_for(std::chrono::milliseconds(100));	
	}
}

void ActionListe::undo()
{
}

void ActionListe::add(Action* action)
{
	muti.lock();
	actions.push_back(action);
	nombre_actions++;
	muti.unlock();
}

void ActionListe::setPermission(int i, bool boolean)
{
	this->permission[i-1]=boolean;
}

void ActionListe::remove(int i)
{
	if(nombre_actions>0){
		for(i;i<nombre_actions-1;i++){
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
