#pragma once
#ifndef SPACESHOOTER_MENU_H
#define SPACESHOOTER_MENU_H
#include <SFML/Graphics.hpp>
class Menu {
private:
    sf::Texture menuButtons;
    sf::Texture activeTexture;
    int activeButton;
    sf::Sprite menuSprites[3];
    sf::Text buttonsText[3];
    sf::Text title;
    sf::Font font;
public:
    Menu();
    void draw(sf::RenderWindow& window);
    void moveUp();
    void moveDown();
    int getSelectedOption();
};

#endif //SPACESHOOTER_MENU_H
