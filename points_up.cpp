#include "points_up.h"




Points_up::Points_up(sf::Vector2f position) : Power_up(position) {
	this->position = position;
	sprite.setPosition(position);
}

sf::Sprite Points_up::getSprite() {
	texture.loadFromFile("./assets/SpaceShooterRedux/PNG/Power-ups/star_gold.png");
	sprite.setTexture(texture);
	return this->sprite;
}