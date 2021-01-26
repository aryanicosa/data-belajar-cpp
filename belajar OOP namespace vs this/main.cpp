#include <iostream>
#include <string>

using namespace std;

//menggunakan data member
class ClassType{
public:
    string dataStr;
    double dataDouble;
    double m_dataDouble; //biasanya menerangkan member dari class

    ClassType(const char* dataStr, double dataDouble){
        //namespace
        ClassType::dataStr = dataStr;

        //menggunakan this
        cout << this << endl; // this adalah pointer / address dari object
        cout << this->dataDouble << endl;

        //menggunakan konvensi penamaan
        m_dataDouble = dataDouble;
    }
};

//menggunakan member function
class Player{
public:
    string name;
    double power;
    int healt;

    Player(const char* name, double power, int healt){
        Player::setName(name);
    }

    void setName(const char* name){
        this->name = name;
    }

    void setPower(double power){
        this-> power = power;
    }

    void setHealt(int); //prototype

};

//namespace dipakai ketika mengakses prototype di dalam class dari luar class tsb
void Player::setHealt(int healt){
    this->healt = healt;
}

int main()
{
    ClassType* object1 = new ClassType("object 1", 0.05);
    cout << object1->dataStr << endl;
    cout << object1->dataDouble << endl;
    cout << object1->m_dataDouble << endl;

    Player* player1 = new Player("anjas", 100, 0);
    cout << player1->name << endl;

    player1->setHealt(10);
    cout << player1->healt << endl;
    return 0;
}
