#pragma once
#ifndef SPACESHOOTER_ROLLING_LASER_H
#define SPACESHOOTER_ROLLING_LASER_H
#include "Projectile.h"
#include <SFML/Graphics.hpp>

class Rolling_laser : public Projectile {


public:

	Rolling_laser(sf::Vector2f position, float roll);
	void shoot();

	void roll(float roll);
	sf::Sprite getSprite();
};


#endif //SPACESHOOTER_ROLLING_LASER_H