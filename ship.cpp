#include "ship.h"

Ship::Ship(int armorToSet, int damageToSet, int speedToSet) : armor(armorToSet), damage(damageToSet), speed(speedToSet) {}

Ship::Ship() {}

float Ship::getSpeed() const {
    return speed;
}

float Ship::getArmor() const {
    return armor;
}

float Ship::getDamage() const {
    return damage;
}

