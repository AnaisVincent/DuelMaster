#include "Layer.h"

Layer::Layer()
{
}

Layer::~Layer()
{
}

const TuileSet * const Layer::getTuileSet()
{
	return nullptr;
}

void Layer::setTuileSet(const TuileSet * tuileset)
{
}

void Layer::setSurface(const Surface * surface)
{
}

void Layer::setAnimation(int i, Animation * a)
{
}

void Layer::printText(int x, int y, const char * msg, int spriteIdx, int w, int h)
{
}

void Layer::sync(int64_t time)
{
}

void Layer::update(int64_t time)
{
}
