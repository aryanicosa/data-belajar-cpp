#include <iostream>
#include <string>
#include "Player.h"

//penjabaran prototype
Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    std::cout << "Nama player : " << this->name << std::endl;
    std::cout << "ini ada di file terpisah" << std::endl;
}

std::string Player::getName(){
    return this->name;
}

void Player::setName(const char* name){
    this->name = name;
}
