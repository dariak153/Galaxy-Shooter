#include "shield.h"
Shield::Shield(sf::Vector2f position) : Effect(position)
{

}

float Shield::returnTime() {
	return 0;
}
sf::Sprite Shield::getSprite() {
	return sprite;
}

void Shield::showShield() {
	
}