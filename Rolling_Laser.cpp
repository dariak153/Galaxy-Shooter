#include "Rolling_laser.h"


Rolling_laser::Rolling_laser(sf::Vector2f position,float roll) : Projectile(position)
{
	this->position = position;
	texture.loadFromFile("./assets/SpaceShooterRedux/PNG/Lasers/laserBlue08.png");
	sprite.setTexture(texture);
	sprite.setPosition(position);
	sprite.setOrigin(texture.getSize().x / 2, texture.getSize().y / 2);
}

void Rolling_laser::shoot() {

	sprite.move((rand()% 10)-5, -6);
}

void Rolling_laser::roll(float roll) {
	sprite.rotate(roll);
}

sf::Sprite Rolling_laser::getSprite() {
	texture.loadFromFile("./assets/SpaceShooterRedux/PNG/Lasers/laserBlue08.png");
	sprite.setTexture(texture);
	return this->sprite;
}