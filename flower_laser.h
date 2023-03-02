#pragma once
#ifndef SPACESHOOTER_FLOWER_LASER_H
#define SPACESHOOTER_FLOWER_LASER_H
#include "Projectile.h"
#include <SFML/Graphics.hpp>

class Flower_laser : public Projectile {
	int dir;
	int r;
public:

	Flower_laser(sf::Vector2f position, int dir);
	void shoot(sf::Window& w);
	sf::Sprite getSprite();

};


#endif //SPACESHOOTER_FLOWER_LASER_H