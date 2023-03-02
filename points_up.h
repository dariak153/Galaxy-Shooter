#pragma once
#ifndef SPACESHOOTER_POINTS_UP_H
#define SPACESHOOTER_POINTS_UP__H
#include "Power_up.h"
#include <iostream>


class Points_up : public Power_up {


public:

	Points_up(sf::Vector2f position);

	sf::Sprite getSprite();
};
#endif //SPACESHOOTER_POINTS_UP__H