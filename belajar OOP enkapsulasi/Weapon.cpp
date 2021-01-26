#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const char* name, double attackPower){
    this->name = name;
    this->attackPower = attackPower;
}

void Weapon::display(){
    std::cout << "Senjata yang dipakai : " << this->name << " power : " << this->attackPower << std::endl;
}

//getter, read only
std::string Weapon::getName(){
    return this->name;
}
