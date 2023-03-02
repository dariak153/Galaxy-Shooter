#pragma once
#ifndef SPACESHOOTER_BOUNCING_LASER_H
#define SPACESHOOTER_BOUNCING_LASER_H
#include "Projectile.h"
#include <SFML/Graphics.hpp>

class Bouncing_laser : public Projectile {
	int dir;
	int r;
public:

	Bouncing_laser(sf::Vector2f position,int dir);
	void shoot(sf::Window &w);
	sf::Sprite getSprite();

};


#endif //SPACESHOOTER_BOUNCING_LASER_H