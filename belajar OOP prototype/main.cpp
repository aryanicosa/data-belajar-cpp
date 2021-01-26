#include <iostream>

using namespace std;

class Player{
public:
    string name;

    //constructor
    // prototype
    Player(const char*);

    void display();

    string getName();

    void setName(const char*);
};

int main()
{
    Player* playerObject = new Player("Marni");
    playerObject->display();

    cout << "Get Name : " << playerObject->getName() << endl;

    playerObject->setName("Lina");

    cout << "Nama player berubah menjadi : " << endl;

    playerObject->display();


    return 0;
}

//penjabaran prototype
Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    cout << "Nama player : " << this->name << endl;
}

string Player::getName(){
    return this->name;
}

void Player::setName(const char* name){
    this->name = name;
}
