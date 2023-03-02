#pragma once
#ifndef SPACESHOOTER_PROJECTILE_H
#define SPACESHOOTER_PROJECTILE_H
#include <SFML/Graphics.hpp>

class Projectile {
public:
	sf::Sprite sprite;
	sf::Vector2f position;
	sf::Texture texture;
	
	Projectile(sf::Vector2f position);

	void shoot() ;
	sf::Sprite getSprite();
	float getPositionY();
};




#endif //SPACESHOOTER_PROJECTILE_H