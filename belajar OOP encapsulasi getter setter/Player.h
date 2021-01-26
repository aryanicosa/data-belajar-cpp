#ifndef __PLAYER
#define __PLAYER

#include <string>

class Player{
private:
    std::string name;
    double attackPower;
    int level;
    int exp;

public:
    Player(const char*);

    //disebut enkapsulasi karena data dibungkus/dilindungi
    //getter, membuat attribute menjadi read only
    //misalnya nama
    std::string getName();

    //setter, untuk write data di dalam class private secara tidak langsung
    void addExperience(int);
    void display();

};

#endif __PLAYER
