#ifndef __Arme_h__
#define __Arme_h__
#include "ElementDuel.h"

class Arme : public ElementDuel
{
private:
	int durabilitit�;


public:
	Arme();
	~Arme();

	void clone() override;
	void utiliser();

};




#endif