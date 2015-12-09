#ifndef __Arme_h__
#define __Arme_h__
#include "Carte.h"

class Arme : public Carte
{
private:
	int durabilitite;


public:
	Arme();
	~Arme();

	void clone() override;
	void utiliser();

};




#endif
