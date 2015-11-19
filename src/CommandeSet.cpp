#include "CommandeSet.h"

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
	for (i = 0; i < commands.size() / sizeof(Commande*); i++) {
		if (commands.at(i)->getCategory() == category) {
			search = commands[i];
		}
	}
	return search;
}

void CommandeSet::set(Commande * cmd)
{
	int i = 0;
	for (i = 0; i < commands.size() / sizeof(Commande*); i++) {
		if (commands.at(i)->getCategory() == cmd->getCategory()) {
			commands[i] = cmd;
		}
	}
}

void CommandeSet::take(CommandeSet & commands, bool replace)
{
	
}
