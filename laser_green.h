#pragma once
#ifndef SPACESHOOTER_LASER_GREEN_H
#define SPACESHOOTER_LASER_GREEN_H
#include "Projectile.h"
#include <SFML/Graphics.hpp>

class Laser_green : public Projectile {


public:

	Laser_green(sf::Vector2f position);
	void shoot();
	sf::Sprite getSprite();
};


#endif //SPACESHOOTER_ROCKET_H