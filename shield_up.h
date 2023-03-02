#pragma once
#ifndef SPACESHOOTER_SHIELD_UP_H
#define SPACESHOOTER_SHIELD_UP_H
#include <SFML/Graphics.hpp>
#include "Power_up.h"
class Shield_up : public Power_up{

public:
	Shield_up(sf::Vector2f position);

	void drop(float time);

    sf::Sprite getSprite();

};
#endif //SPACESHOOTER_SHIELD_UP_H