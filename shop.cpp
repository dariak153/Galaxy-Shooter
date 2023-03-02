#include "shop.h"

Shop::Shop(Account& accountToSet) : account(accountToSet) {
    font.loadFromFile("kenvector_future.ttf");
    activeButton = 0;
    menuButtons.loadFromFile("buttonRed.png");
    activeTexture.loadFromFile("buttonBlue.png");
    for (int i = 0; i < 3; i++) {

        buttonsText[i].setFont(font);
        buttonsText[i].setCharacterSize(20);
        if (i == activeButton) {
            menuSprites[i].setTexture(activeTexture);
            buttonsText[i].setFillColor(sf::Color(0, 100, 200));
        }
        else {
            buttonsText[i].setFillColor(sf::Color(200, 0, 0));
            menuSprites[i].setTexture(menuButtons);
        }
        menuSprites[i].setScale(1, 1);
        menuSprites[i].setPosition(sf::Vector2f(530, 200 + i * 50));
    }
}
