#include "menu.h"

Menu::Menu() {

    font.loadFromFile("./fonts/kenvector_future.ttf");
    title.setFont(font);
    title.setFillColor(sf::Color::White);
    title.setString(L"Galaxy Shooter");
    title.setCharacterSize(70);
    title.setOutlineColor(sf::Color::Red);
    title.setOutlineThickness(1);
    title.setPosition(sf::Vector2f(260, 50));


    activeButton = 0;
    menuButtons.loadFromFile("./SpaceShooterRedux/PNG/UI/buttonRed.png");
    activeTexture.loadFromFile("./SpaceShooterRedux/PNG/UI/buttonBlue.png");
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
    buttonsText[0].setPosition(sf::Vector2f(575, 205));
    buttonsText[1].setPosition(sf::Vector2f(610, 255));
    buttonsText[2].setPosition(sf::Vector2f(615, 305));
    buttonsText[0].setString("New Game");
    buttonsText[1].setString("Shop");
    buttonsText[2].setString("Exit");
}

void Menu::draw(sf::RenderWindow& window) {
    window.draw(title);
    for (int i = 0; i < 3; i++) {
        window.draw(menuSprites[i]);
        window.draw(buttonsText[i]);
    }
}

void Menu::moveUp() {
    if (activeButton != 0) {
        buttonsText[activeButton].setFillColor(sf::Color(200, 0, 0));
        menuSprites[activeButton].setTexture(menuButtons);
        activeButton--;
        menuSprites[activeButton].setTexture(activeTexture);
        buttonsText[activeButton].setFillColor(sf::Color(0, 100, 200));
    }

}

void Menu::moveDown() {
    if (activeButton != 2) {
        buttonsText[activeButton].setFillColor(sf::Color(200, 0, 0));
        menuSprites[activeButton].setTexture(menuButtons);
        activeButton++;
        menuSprites[activeButton].setTexture(activeTexture);
        buttonsText[activeButton].setFillColor(sf::Color(0, 100, 200));
    }
}

int Menu::getSelectedOption() {
    return activeButton;
}
