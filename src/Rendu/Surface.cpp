#include "../Rendu_headers/Moteur_de_Rendu.hpp"

using namespace Moteur_de_Rendu;


Surface::~Surface()
{
}

void Surface::clear()
{
}

sf::Texture Surface::getTexture()
{
	return tuileset;
}

void Surface::loadTexture(char * image_file)
{
	if (!tuileset.loadFromFile(image_file)) {
		std::cout << "erreur lors du chargement de la texture" << std::endl;
	}
	//tuileset.setSmooth(true);

}

void Surface::setSpriteCount(int n)
{
}

void Surface::setSpriteLocation(int i, int x, int y)
{

}

void Surface::setSpriteTexture(int i, const StaticTuile tex)
{
}
