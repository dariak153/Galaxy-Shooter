#include <iostream>
#include <SFML/Graphics.hpp>
#include "account.h"
#include "player.h"
#include "menu.h"
#include "Metor.h"
#include "laser_green.h"
#include <vector>
#include <random>
#include "bouncing_laser.h"
#include "points_up.h"
#include "const.h"
#include "shield_up.h"
#include "flower_laser.h"
#include "Rolling_laser.h"
/*
 * STATES DESCRIPTION
 * 0: main menu
 * 1: shop
 * 2: game
 */
int main() {
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Space Shooter");
    window.setFramerateLimit(30);
    sf::Sprite background;
    background.setScale(1280, 720);
    sf::Texture backgroundTex;
    backgroundTex.loadFromFile("./SpaceShooterRedux/Backgrounds/blue.png");
    Account account("save.txt");
    background.setTexture(backgroundTex);
    Player player(1, 1, 10);
    Menu menu;
    int STATE = 0;
    int counter1 = 0;
    int counter2 = 0;
    int sw_itch = rand() % 4 + 1;
    sf::Clock clock;
    std::vector<Meteor*>meteory;
    std::vector<Bouncing_laser*>lasers;
    //std::vector<Laser_green*>lasers;
    //std::vector<Flower_laser*>lasers;
   // std::vector<Rolling_laser*>lasers;
    std::vector<Power_up*>power_ups;
    sf::Event event;
    while (window.isOpen()) {
        sf::Time elapsed = clock.getElapsedTime();
        while (window.pollEvent(event)) {
            switch (event.type) {
            case sf::Event::Closed: {
                window.close();
                break;
            }
            case sf::Event::KeyPressed: {
                switch (event.key.code) {
                case sf::Keyboard::Left: {
                    player.moveLeft();
                    break;
                }
                case sf::Keyboard::A: {
                    player.moveLeft();
                    break;
                }
                case sf::Keyboard::Right: {
                    player.moveRight();
                    break;
                }
                case sf::Keyboard::D: {
                    player.moveRight();
                    break;
                }
                case sf::Keyboard::Up: {
                    menu.moveUp();
                    break;
                }
                case sf::Keyboard::W: {
                    menu.moveUp();
                    break;
                }
                case sf::Keyboard::Down: {
                    menu.moveDown();
                    break;
                }
                case sf::Keyboard::S: {
                    menu.moveDown();
                    break;
                }
                case sf::Keyboard::Space: {
                    if (menu.getSelectedOption() == 0) {
                        STATE = 2;
                        if (counter1 > 10) {


                            //4 rodzaje laserów 

                            lasers.push_back(new Bouncing_laser(sf::Vector2f(player.getPositionX(), player.getPositionY()), -2));
                            lasers.push_back(new Bouncing_laser(sf::Vector2f(player.getPositionX() + player.getSizeX(), player.getPositionY()), 2));
                            //lasers.push_back(new Laser_green(sf::Vector2f(player.getPositionX() + player.getSizeX(),player.getPositionY())));
                            //lasers.push_back(new Laser_green(sf::Vector2f(player.getPositionX() , player.getPositionY())));


                            /*lasers.push_back(new Flower_laser(sf::Vector2f(player.getPositionX() , player.getPositionY()),-4));
                            lasers.push_back(new Flower_laser(sf::Vector2f(player.getPositionX()+player.getSizeX() / 4, player.getPositionY()), -2));
                            lasers.push_back(new Flower_laser(sf::Vector2f(player.getPositionX() + player.getSizeX() / 2 -10, player.getPositionY()), 0));
                            lasers.push_back(new Flower_laser(sf::Vector2f(player.getPositionX() +player.getSizeX()*0.75, player.getPositionY()),2));
                            lasers.push_back(new Flower_laser(sf::Vector2f(player.getPositionX() + player.getSizeX(), player.getPositionY()),4));*/



                            //lasers.push_back(new Rolling_laser(sf::Vector2f(player.getPositionX() + player.getSizeX() / 2, player.getPositionY()),elapsed.asSeconds()));



                            //laser.push
                        }
                    }
                    else {
                        if (menu.getSelectedOption() == 1) {
                            STATE = 1;
                        }
                        else {
                            window.close();
                        }
                    }
                    break;
                }

                }
            }
            }

        }

        for (size_t i = 0; i < meteory.size(); i++) {
            for (size_t j = 0; j < lasers.size(); j++) {
                if (meteory[i]->getBounds().intersects(lasers[j]->sprite.getGlobalBounds())) {
                    meteory.erase(meteory.begin() + i);
                    lasers.erase(lasers.begin() + j);
                }
            }
        }

        for (size_t i = 0; i < power_ups.size(); i++) {
            for (size_t j = 0; j < lasers.size(); j++) {
                if (power_ups[i]->getBounds().intersects(lasers[j]->sprite.getGlobalBounds())) {
                    power_ups.erase(power_ups.begin() + i);
                    lasers.erase(lasers.begin() + j);
                }
            }
        }

        window.clear();
        window.draw(background);
        if (STATE == 0) {
            menu.draw(window);
        }
        if (STATE == 1) {

        }
        if (STATE == 2) {
            window.draw(player.getShipSprite());

            if (counter1 < 40) {
                counter1 += 1;
            }
            if (counter2 < 160) {
                counter2 += 1;
            }

            if (counter1 >= 40) {
                meteory.push_back(new Meteor(sf::Vector2f(rand() % (window.getSize().x - 130), 0), rand()% 2 +1,rand() % 4 + 1, rand() % 2 + 1));
                counter1 = 0;
            }
            if (counter2 >= 160) {
                if (rand() % 2 == 1) {
                    (power_ups).push_back(new Points_up(sf::Vector2f(rand() % window.getSize().x - 130, window.getSize().y - 230)));
                }
                else {
                    (power_ups).push_back(new Shield_up(sf::Vector2f(rand() % window.getSize().x - 130, window.getSize().y - 230)));
                }
                std::cout << "punkt" << std::endl;
                counter2 = 0;
            }

            for (size_t i = 0; i < meteory.size(); i++) {
                meteory[i]->drop(1);
                if (meteory[i]->sprite.getPosition().y >= window.getSize().y) {
                    meteory.erase(meteory.begin()+i);
                }
            }


            for (size_t i = 0; i < lasers.size(); i++) {
                //r laser
                //lasers[i]->shoot();
                //f laser
                //lasers[i]->shoot(window);
                //g laser
                //lasers[i]->shoot();
                //b laser 
                lasers[i]->shoot(window);
                if (lasers[i]->getPositionY() <= 0) {
                    lasers.erase(lasers.begin() + i);
                }
            }
            for (size_t i = 0; i < meteory.size(); i++) {
                window.draw(meteory[i]->getSprite());
            }

            for (size_t i = 0; i < lasers.size(); i++) {
                window.draw(lasers[i]->getSprite());
            }
            for (size_t i = 0; i < power_ups.size(); i++) {
                window.draw(power_ups[i]->getSprite());
            }
        }


        window.display();
    }
    return 0;
}