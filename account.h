#pragma once
#ifndef SPACESHOOTER_ACCOUNT_H
#define SPACESHOOTER_ACCOUNT_H
#include <string>
class Account {
private:
    std::string name;
    int coins;
    int redShipArmorUpgrades;
    int redShipDamageUpgrades;
    int redShipSpeedUpgrades;
    int greenShipArmorUpgrades;
    int greenShipDamageUpgrades;
    int greenShipSpeedUpgrades;
    int blueShipArmorUpgrades;
    int blueShipDamageUpgrades;
    int blueShipSpeedUpgrades;
    int orangeShipArmorUpgrades;
    int orangeShipDamageUpgrades;
    int orangeShipSpeedUpgrades;
    bool redShipUnlock;
    bool greenShipUnlock;
    bool blueShipUnlock;
    bool orangeShipUnlock;
public:
    Account(std::string saveFileName);
    std::string getName() const;
    int getCoins() const;

    bool getRedShipUnlock() const;
    bool getGreenShipUnlock() const;
    bool getBlueShipUnlock() const;
    bool getOrangeShipUnlock() const;

    int getRedShipArmorUpgrades() const;
    int getRedShipDamageUpgrades() const;
    int getRedShipSpeedUpgrades() const;

    int getGreenShipArmorUpgrades() const;
    int getGreenShipDamageUpgrades() const;
    int getGreenShipSpeedUpgrades() const;

    int getBlueShipArmorUpgrades() const;
    int getBlueShipDamageUpgrades() const;
    int getBlueShipSpeedUpgrades() const;

    int getOrangeShipArmorUpgrades() const;
    int getOrangeShipDamageUpgrades() const;
    int getOrangeShipSpeedUpgrades() const;

    void setName(std::string nameToSet);
    void setCoins(int toSet);

    void setRedShipUnlock(bool toSet);
    void setGreenShipUnlock(bool toSet);
    void setBlueShipUnlock(bool toSet);
    void setOrangeShipUnlock(bool toSet);

    void setRedShipArmorUpgrades(int toSet);
    void setRedShipDamageUpgrades(int toSet);
    void setRedShipSpeedUpgrades(int toSet);

    void setBlueShipArmorUpgrades(int toSet);
    void setBlueShipDamageUpgrades(int toSet);
    void setBlueShipSpeedUpgrades(int toSet);

    void setGreenShipArmorUpgrades(int toSet);
    void setGreenShipDamageUpgrades(int toSet);
    void setGreenShipSpeedUpgrades(int toSet);

    void setOrangeShipArmorUpgrades(int toSet);
    void setOrangeShipDamageUpgrades(int toSet);
    void setOrangeShipSpeedUpgrades(int toSet);
    void saveToFile(std::string fileName);
};
#endif
