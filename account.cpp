#include "account.h"
#include <fstream>
#include <iostream>
Account::Account(std::string saveFileName) {
    std::fstream saveFile;
    saveFile.open(saveFileName, std::ios::in);
    std::string tmp;
    int tmpint;
    bool createAccount = false;
    if (saveFile.good()) {
        while (!saveFile.eof()) {
            std::cout << "loading" << std::endl;
            saveFile >> tmp;
            if (tmp == "") {
                createAccount = true;
                break;
            }
            setName(tmp);
            saveFile >> tmpint;
            setCoins(tmpint);
            saveFile >> tmpint;
            setRedShipUnlock(tmpint);
            saveFile >> tmpint;
            setGreenShipUnlock(tmpint);
            saveFile >> tmpint;
            setBlueShipUnlock(tmpint);
            saveFile >> tmpint;
            setOrangeShipUnlock(tmpint);

            saveFile >> tmpint;
            setRedShipArmorUpgrades(tmpint);
            saveFile >> tmpint;
            setRedShipDamageUpgrades(tmpint);
            saveFile >> tmpint;
            setRedShipSpeedUpgrades(tmpint);

            saveFile >> tmpint;
            setGreenShipArmorUpgrades(tmpint);
            saveFile >> tmpint;
            setGreenShipDamageUpgrades(tmpint);
            saveFile >> tmpint;
            setGreenShipSpeedUpgrades(tmpint);

            saveFile >> tmpint;
            setBlueShipArmorUpgrades(tmpint);
            saveFile >> tmpint;
            setBlueShipDamageUpgrades(tmpint);
            saveFile >> tmpint;
            setBlueShipSpeedUpgrades(tmpint);

            saveFile >> tmpint;
            setOrangeShipArmorUpgrades(tmpint);
            saveFile >> tmpint;
            setOrangeShipDamageUpgrades(tmpint);
            saveFile >> tmpint;
            setOrangeShipSpeedUpgrades(tmpint);
        }
    }
    if (createAccount) {
        saveFile.close();
        std::cout << " creating new account" << std::endl;
        setName("Player");
        setCoins(0);

        setRedShipUnlock(true);
        setGreenShipUnlock(false);
        setBlueShipUnlock(false);
        setOrangeShipUnlock(false);

        setRedShipArmorUpgrades(0);
        setRedShipDamageUpgrades(0);
        setRedShipSpeedUpgrades(0);

        setGreenShipArmorUpgrades(0);
        setGreenShipDamageUpgrades(0);
        setGreenShipSpeedUpgrades(0);

        setBlueShipArmorUpgrades(0);
        setBlueShipDamageUpgrades(0);
        setBlueShipSpeedUpgrades(0);

        setOrangeShipArmorUpgrades(0);
        setOrangeShipDamageUpgrades(0);
        setOrangeShipSpeedUpgrades(0);
        saveToFile("save.txt");
    }

}

std::string Account::getName() const {
    return name;
}

int Account::getCoins() const {
    return coins;
}

bool Account::getRedShipUnlock() const {
    return redShipUnlock;
}

bool Account::getGreenShipUnlock() const {
    return greenShipUnlock;
}

bool Account::getBlueShipUnlock() const {
    return blueShipUnlock;
}

bool Account::getOrangeShipUnlock() const {
    return orangeShipUnlock;
}

int Account::getRedShipArmorUpgrades() const {
    return redShipArmorUpgrades;
}

int Account::getRedShipDamageUpgrades() const {
    return redShipDamageUpgrades;
}

int Account::getRedShipSpeedUpgrades() const {
    return redShipSpeedUpgrades;
}

int Account::getGreenShipArmorUpgrades() const {
    return greenShipArmorUpgrades;
}

int Account::getGreenShipDamageUpgrades() const {
    return greenShipDamageUpgrades;
}

int Account::getGreenShipSpeedUpgrades() const {
    return greenShipSpeedUpgrades;
}

int Account::getBlueShipArmorUpgrades() const {
    return blueShipArmorUpgrades;
}

int Account::getBlueShipDamageUpgrades() const {
    return blueShipDamageUpgrades;
}

int Account::getBlueShipSpeedUpgrades() const {
    return blueShipSpeedUpgrades;
}

int Account::getOrangeShipArmorUpgrades() const {
    return orangeShipArmorUpgrades;
}

int Account::getOrangeShipDamageUpgrades() const {
    return orangeShipDamageUpgrades;
}

int Account::getOrangeShipSpeedUpgrades() const {
    return orangeShipSpeedUpgrades;
}

void Account::setName(std::string nameToSet) {
    name = nameToSet;
}

void Account::setRedShipUnlock(bool toSet) {
    redShipUnlock = toSet;
}

void Account::setGreenShipUnlock(bool toSet) {
    greenShipUnlock = toSet;
}

void Account::setBlueShipUnlock(bool toSet) {
    blueShipUnlock = toSet;
}

void Account::setOrangeShipUnlock(bool toSet) {
    orangeShipUnlock = toSet;
}

void Account::setRedShipArmorUpgrades(int toSet) {
    redShipArmorUpgrades = toSet;
}

void Account::setRedShipDamageUpgrades(int toSet) {
    redShipDamageUpgrades = toSet;
}

void Account::setRedShipSpeedUpgrades(int toSet) {
    redShipSpeedUpgrades = toSet;
}

void Account::setGreenShipArmorUpgrades(int toSet) {
    greenShipArmorUpgrades = toSet;
}

void Account::setGreenShipDamageUpgrades(int toSet) {
    greenShipDamageUpgrades = toSet;
}

void Account::setGreenShipSpeedUpgrades(int toSet) {
    greenShipSpeedUpgrades = toSet;
}

void Account::setBlueShipArmorUpgrades(int toSet) {
    blueShipArmorUpgrades = toSet;
}

void Account::setBlueShipDamageUpgrades(int toSet) {
    blueShipDamageUpgrades = toSet;
}

void Account::setBlueShipSpeedUpgrades(int toSet) {
    blueShipSpeedUpgrades = toSet;
}

void Account::setOrangeShipArmorUpgrades(int toSet) {
    orangeShipArmorUpgrades = toSet;
}

void Account::setOrangeShipDamageUpgrades(int toSet) {
    orangeShipDamageUpgrades = toSet;
}

void Account::setOrangeShipSpeedUpgrades(int toSet) {
    orangeShipSpeedUpgrades = toSet;
}

void Account::setCoins(int toSet) {
    coins = toSet;
}

void Account::saveToFile(std::string fileName) {
    std::fstream file;
    file.open(fileName, std::ios::out);
    if (file.good()) {
        file << getName() << " " << getCoins() << " " << getRedShipUnlock() << " " << getGreenShipUnlock() << " " << getBlueShipUnlock() << " " << getOrangeShipUnlock() << " " << getRedShipArmorUpgrades() << " " << getRedShipDamageUpgrades() << " " << getRedShipSpeedUpgrades() << " " << getGreenShipArmorUpgrades() << " " << getGreenShipDamageUpgrades() << " " << getGreenShipSpeedUpgrades() << " " << getBlueShipArmorUpgrades() << " " << getBlueShipDamageUpgrades() << " " << getBlueShipSpeedUpgrades() << " " << getOrangeShipArmorUpgrades() << " " << getOrangeShipDamageUpgrades() << " " << getOrangeShipSpeedUpgrades();
    }
    file.close();
}
