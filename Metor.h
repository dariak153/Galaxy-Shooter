#pragma once
#ifndef SPACESHOOTER_METEOR_H
#define SPACESHOOTER_METEOR_H
#include "Power_up.h"
#include <iostream>


class Meteor : public Power_up {


public:

	void returnTexure(int c, int s, int n);

	Meteor(sf::Vector2f position, int c, int s, int n);

	sf::Sprite getSprite();
	sf::FloatRect getBounds();
};
#endif //SPACESHOOTER_METEOR_H