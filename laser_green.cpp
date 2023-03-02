#include "laser_green.h"
#include <iostream>
Laser_green::Laser_green(sf::Vector2f position) : Projectile(position)
{
	this->position = position;
	sprite.setPosition(position);
}

void Laser_green::shoot() {

	this->sprite.move(0, -6);

}

sf::Sprite Laser_green::getSprite() {
	texture.loadFromFile("./assets/SpaceShooterRedux/PNG/Lasers/laserGreen03.png");
	sprite.setTexture(texture);
	return this->sprite;
}