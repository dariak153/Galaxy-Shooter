#include "player.h"
#include <iostream>
Player::Player(int armorToSet, int damageToSet, int speedToSet) {
    Ship shipToAdd(armorToSet, damageToSet, speedToSet);
    actualShip = shipToAdd;
    sf::Texture textureToAdd;
    shipTex = textureToAdd;
    sf::Sprite spriteToAdd;
    shipSprite = spriteToAdd;
    positionX = 610.0;
    positionY = 620.0;
    shipTex.loadFromFile("./SpaceShooterRedux/PNG/playerShip1_red.png");
    shipSprite.setTexture(shipTex);
    shipSprite.setScale(1, 1);
    shipSprite.setPosition(positionX, positionY);
}

float Player::getPositionY() const {
    return positionY;
}

float Player::getSizeX() const {
    return shipTex.getSize().x;
}

float Player::getPositionX() const {
    return positionX;
}

int Player::returnPoints() {
    return points;
}

void Player::setPosition(float positionXToSet, float positionYToSet) {
    positionX = positionXToSet;
    positionY = positionYToSet;
}

sf::Sprite Player::getShipSprite() {
    return shipSprite;
}

void Player::moveRight() {
    positionX = positionX + actualShip.getSpeed();
    shipSprite.setPosition(positionX, positionY);
}

void Player::moveLeft() {
    positionX = positionX - actualShip.getSpeed();
    shipSprite.setPosition(positionX, positionY);
}

