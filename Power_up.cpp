#include "Power_up.h"

Power_up::Power_up(sf::Vector2f position) {


}

void Power_up::drop(float time) {
	sprite.move(0, time);
}

sf::Sprite Power_up::getSprite(){
	return sprite;
}

sf::FloatRect Power_up::getBounds() {
	return this->sprite.getGlobalBounds();
}