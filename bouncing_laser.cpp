#include "bouncing_laser.h"
#include <iostream>
Bouncing_laser::Bouncing_laser(sf::Vector2f position,int dir) : Projectile(position)
{
	this->position = position;
	this->dir = dir;
	sprite.setPosition(position);
	sprite.setOrigin(texture.getSize().x / 2, texture.getSize().y / 2);
}

void Bouncing_laser::shoot(sf::Window& w) {
	if (dir >0) {
		sprite.setRotation(45);
	}
	if (dir <0) {
		sprite.setRotation(-45);
	}
	if (sprite.getPosition().x >= w.getSize().x) {
		this->dir = -dir;
		sprite.setRotation(-45);
	}
	if (sprite.getPosition().x <= 0) {
		this->dir = -dir;
		sprite.setRotation(45);
	}
	if (dir != 0) {
		sprite.move(dir, -6);
	}
}

sf::Sprite Bouncing_laser::getSprite() {
	texture.loadFromFile("./assets/SpaceShooterRedux/PNG/Lasers/laserRed12.png");
	sprite.setTexture(texture);
	return this->sprite;
}