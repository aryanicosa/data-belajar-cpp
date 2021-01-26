#include <iostream>
#include <string>
#include "Player.h"

Player::Player(const char* name){
        this->name = name;
        this->attackPower = 100;
        this->level = 1;
        this->exp = 0;
    }

    //disebut enkapsulasi karena data dibungkus/dilindungi
    //getter, membuat attribute menjadi read only
    //misalnya nama
std::string Player::getName(){
    return this->name;
}

    //setter, untuk write data di dalam class private secara tidak langsung
void Player::addExperience(int expValue){
    int maxExp = 100;
    std::cout << "Mendapat Exp = " << expValue << std::endl;
    this->exp += expValue;
    if (this->exp >= 100){
        //naikkan level
        this->level++;
        std::cout << "LEVEL UP!" << std::endl;
        this->attackPower += 100;
        std::cout << "Attack bertambah menjadi = " << this->attackPower << std::endl << std::endl;
        this->exp = 0;
    }
}

void Player::display(){
    std::cout << "Name  \t: " << this->name << std::endl;
    std::cout << "Level   : " << this->level << ", Exp   : " << this->exp << std::endl;
    std::cout << "Attack\t: " << this->attackPower << std::endl;
}
