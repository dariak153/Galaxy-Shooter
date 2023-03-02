#include "Metor.h"



void Meteor::returnTexure(int c, int s, int n) {
	std::string w_r = "./assets/SpaceShooterRedux/PNG/Meteors/meteor";
	std::string what = "./assets/SpaceShooterRedux/PNG/Meteors/meteor";
	switch (c) {
	case 1:
		what += "Brown_";
		break;
	case 2:
		what += "Grey_";
		//texture.loadFromFile(w_r + "Grey" + ".png");
		break;
	}
	switch (s) {
	case 1:
		what += "big";
		break;
	case 2:
		what += "med";
		//texture.loadFromFile(w_r + "Grey" + ".png");
		break;
	case 3:
		what += "small";
		//texture.loadFromFile(w_r + "Grey" + ".png");
		break;
	case 4:
		what += "tiny";
		//texture.loadFromFile(w_r + "Grey" + ".png");
		break;
	}
	switch (n) {
	case 1:
		what += "1";
		break;
	case 2:
		what += "2";
		break;
	case 3:
		what += "3";
		break;
	case 4:
		what += "4";
		break;
	}
	texture.loadFromFile(what + ".png");
}

Meteor::Meteor(sf::Vector2f position, int c, int s, int n) : Power_up(position){
	this->position = position;
	returnTexure(c, s, n);
	sprite.setTexture(texture);
	sprite.setPosition(position);
}

sf::Sprite Meteor::getSprite() {
	return this->sprite;
}


sf::FloatRect Meteor::getBounds() {
	return this->sprite.getGlobalBounds();
}

