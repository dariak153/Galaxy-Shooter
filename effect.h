#pragma once
#ifndef SPACESHOOTER_EFFECT_H
#define SPACESHOOTER_EFFECT__H
#include "Power_up.h"
#include <iostream>


class Effect  {
public:
	float time;
	sf::Texture texture;
	sf::Sprite sprite;
	Effect(sf::Vector2f position);

	sf::Sprite getSprite();
	float returnTime();
};
#endif //SPACESHOOTER_EFFECT__H