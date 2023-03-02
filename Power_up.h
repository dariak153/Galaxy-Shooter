#pragma once
#ifndef SPACESHOOTER_POWER_UP_H
#define SPACESHOOTER_POWER_UP_H
#include <SFML/Graphics.hpp>

class Power_up {

public:
	sf::Vector2f position;
	sf::Texture texture;
	sf::Sprite sprite;
	Power_up(sf::Vector2f position);

	void drop(float time);

	virtual sf::Sprite getSprite();

	sf::FloatRect getBounds();

};
#endif //SPACESHOOTER_POWER_UP_H