#include "TuileSetWorld.h"

TuileSetWorld::TuileSetWorld()
{
	tuiles[0] = StaticTuile(32,0,32,32);
	tuiles[1] = StaticTuile(21*32, 0, 32, 32);
	tuiles[2] = StaticTuile(19 * 32, 32, 32, 32);
	tuiles[3] = StaticTuile(4 * 32, 32, 32, 32);
}

TuileSetWorld::~TuileSetWorld() {}

int const TuileSetWorld::getCellWidth()
{
	return 32 * 4;
}

int const TuileSetWorld::getCellHeight()
{
	return 32;
}

const char * const TuileSetWorld::getImageFile()
{
	return image_file;
}

const Tuile * const TuileSetWorld::getElementTuile(const Element * e)
{
	return nullptr;
}


const Tuile * const TuileSetWorld::getCharTuile(char c)
{
	const Tuile* temp;
	switch (c)
	{
	case 'F' :
		temp = tuiles;
		break;
	case 'T':
		temp = tuiles + sizeof(Tuile);
		break;
	case 'R':
		temp = tuiles + 2*sizeof(Tuile);
		break;
	case 'E':
		temp = tuiles + 3*sizeof(Tuile);
		break;
	default:
		break;
	}
	return temp;
}
