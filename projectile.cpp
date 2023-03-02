#include "Projectile.h"
Projectile::Projectile(sf::Vector2f position)
{

}

void Projectile::shoot() {
	//this->sprite.move(0, -6);
}
sf::Sprite Projectile::getSprite() {
	return sprite;
}

    float Projectile::getPositionY() {
	return this->sprite.getPosition().y;
}