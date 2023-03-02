#pragma once
#ifndef SPACESHOOTER_SHIP_H
#define SPACESHOOTER_SHIP_H
class Ship {
private:
    float armor;
    float damage;
    float speed;
public:
    Ship(int armorToSet, int damageToSet, int speedToSet);
    Ship();
    float getSpeed() const;
    float getArmor() const;
    float getDamage() const;

};
#endif //SPACESHOOTER_SHIP_H
