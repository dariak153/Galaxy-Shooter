#include "flower_laser.h"
#include <iostream>
Flower_laser::Flower_laser(sf::Vector2f position, int dir) : Projectile(position)
{
	this->position = position;
	this->dir = dir;
	sprite.setPosition(position);
	sprite.setOrigin(texture.getSize().x / 2, texture.getSize().y / 2);
}

void Flower_laser::shoot(sf::Window& w) {
	
	if (dir != 0) {
		sprite.move(dir, -6);
	}
	else {
		sprite.move(0, -6);
	}
}

sf::Sprite Flower_laser::getSprite() {
	texture.loadFromFile("./assets/SpaceShooterRedux/PNG/Lasers/laserRed11.png");
	sprite.setTexture(texture);
	return this->sprite;
}