#pragma once
#ifndef SPACESHOOTER_SHOP_H
#define SPACESHOOTER_SHOP_H
#include <SFML/Graphics.hpp>
#include "account.h"
class Shop {
private:
    Account& account;
    sf::Sprite shipSprites[4];
    sf::Texture shipTexs[4];
    sf::Texture menuButtons;
    sf::Texture activeTexture;
    int activeButton;
    sf::Sprite menuSprites[13];
    sf::Text buttonsText[13];
    sf::Font font;
public:
    Shop(Account& accountToSet);
    void draw(sf::RenderWindow& window);
    void moveUp();
    void moveDown();
    int getSelectedOption();
};

#endif //SPACESHOOTER_SHOP_H
