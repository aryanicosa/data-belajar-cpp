//pastikan jika sudah di include
#ifndef __PLAYER
#define __PLAYER

#include <string>

class Player{
public:
    std::string name;

    //constructor
    // prototype
    Player(const char*);

    void display();

    std::string getName();

    void setName(const char*);
};

#endif __PLAYER
