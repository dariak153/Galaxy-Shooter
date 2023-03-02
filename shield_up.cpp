#include "shield_up.h"




Shield_up::Shield_up(sf::Vector2f position) : Power_up(position) {
	this->position = position;
	sprite.setPosition(position);
}

sf::Sprite Shield_up::getSprite() {
	texture.loadFromFile("./assets/SpaceShooterRedux/PNG/Power-ups/shield_silver.png");
	sprite.setTexture(texture);
	return this->sprite;
}