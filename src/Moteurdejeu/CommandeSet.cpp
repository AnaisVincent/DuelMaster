#include "../Moteurdejeu_headers/CommandeSet.h"

CommandeSet::~CommandeSet()
{
}

int const CommandeSet::size()
{
	return commands.size();
}

Commande * const CommandeSet::get(int category)
{
	Commande* search;
	int i = 0;
	for (i = 0; i < commands.size(); i++) {
		if (commands.at(i)->getCategory() == category) {
			search = commands[i];
		}
	}
	return search;
}

void CommandeSet::set(Commande * cmd)
{
	commands.push_back(cmd);
}

void CommandeSet::pop()
{
	commands.pop_back();
}

std::vector<Commande*> CommandeSet::take()
{
	//std::cout << "fonction basique" << std::endl;
	return commands;
}
