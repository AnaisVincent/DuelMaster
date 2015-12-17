#include "../Rendu_headers/Moteur_de_Rendu.hpp"

using namespace Moteur_de_Rendu;

TuileSetChar::TuileSetChar()
{
	tuiles[0] = StaticTuile(32, 0, 32, 32);
	tuiles[1] = StaticTuile(21 * 32, 0, 32, 32);
	tuiles[2] = StaticTuile(19 * 32, 32, 32, 32);
	tuiles[3] = StaticTuile(4 * 32, 32, 32, 32);
}

TuileSetChar::~TuileSetChar() {}

int const TuileSetChar::getCellWidth()
{
	return 32 * 4;
}

int const TuileSetChar::getCellHeight()
{
	return 32;
}

const char * const TuileSetChar::getImageFile()
{
	return image_file;
}

/*const Tuile * const TuileSetChar::getElementTuile(const Element * e)
{
	return nullptr;
}*/


/*const Tuile * const TuileSetChar::getCharTuile(char c)
{
	const Tuile* temp;
	/*switch (c)
	{
	case 'F':
		temp = tuiles;
		break;
	case 'T':
		temp = tuiles + sizeof(Tuile);
		break;
	case 'R':
		temp = tuiles + 2 * sizeof(Tuile);
		break;
	case 'E':
		temp = tuiles + 3 * sizeof(Tuile);
		break;
	default:
		break;
	}
	return temp;
}*/
