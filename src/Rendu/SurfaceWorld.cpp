#include "../Rendu_headers/Moteur_de_Rendu.hpp"

using namespace Moteur_de_Rendu;


SurfaceWorld::SurfaceWorld()
{
	vertices.setPrimitiveType(sf::Quads);
}

SurfaceWorld::~SurfaceWorld()
{
}

void SurfaceWorld::clear()
{
	vertices.clear();
}


void SurfaceWorld::loadTexture(const char * image_file)
{
	if (!texture.loadFromFile(image_file)) {
		std::cout << "erreur lors du chargement de la texture" << std::endl;
	}
	//tuileset.setSmooth(true);

}

void SurfaceWorld::setArrayWidth(int w)
{
	arrayWidth = w;
}

void SurfaceWorld::setSprite(StaticTuile tex, std::vector<int> tuiles)
{
	// on redimensionne le tableau de vertex pour qu'il puisse contenir tout le niveau
	vertices.resize(spriteCount * 4);
	std::cout << "level case 0 : " << tuiles[0] << std::endl;
	// on remplit le tableau de vertex, avec un quad par tuile
	for (unsigned int i = 0; i < spriteCount; ++i)
		{
			// on récupère le numéro de tuile courant
			int tn = tuiles[i];
			// on récupère un pointeur vers le quad à définir dans le tableau de vertex
			quad = &vertices[i * 4];

			setSpriteLocation(i, tex.getWidth(), tex.getHeight());
			setSpriteTexture(tn, tex);

		}
}

void SurfaceWorld::setSpriteCount(int n)
{
	spriteCount = n;
}

void SurfaceWorld::setSpriteLocation(int i, int x, int y)
{
	// on déduit les coordonnées de la tuile dans le tableau de vertex
	int ti = i % arrayWidth;
	int tj = i / arrayWidth;
	// on définit les quatre coins du quad
	quad[0].position = sf::Vector2f(ti * x, tj * y);
	quad[1].position = sf::Vector2f((ti + 1) * x, tj * y);
	quad[2].position = sf::Vector2f((ti + 1) * x, (tj + 1) * y);
	quad[3].position = sf::Vector2f(ti * x, (tj + 1) * y);
}

void SurfaceWorld::setSpriteTexture(int i, StaticTuile tex)
{
	// on déduit la position de la tuile dans la texture du tileset
	int tu = i % (texture.getSize().x / tex.getWidth());
	int tv = i / (texture.getSize().x / tex.getWidth());
	// on définit les quatre coordonnées de texture du quad
	quad[0].texCoords = sf::Vector2f(tu * tex.getWidth(), tv * tex.getHeight());
	quad[1].texCoords = sf::Vector2f((tu + 1) * tex.getWidth(), tv * tex.getHeight());
	quad[2].texCoords = sf::Vector2f((tu + 1) * tex.getWidth(), (tv + 1) * tex.getHeight());
	quad[3].texCoords = sf::Vector2f(tu * tex.getWidth(), (tv + 1) * tex.getHeight());
}

void SurfaceWorld::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	// on applique la transformation
	states.transform *= getTransform();

	// on applique la texture du tileset
	states.texture = &texture;

	// et on dessine enfin le tableau de vertex
	target.draw(vertices, states);
}