#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main()
{
    Player player1 = Player("Naruko"); // object ditaruh di stack
    player1.display();

    //implementasi getter
    cout << "Mengakses nama Player read only dengan getter : " << player1.getName() << endl; //read name
    // player1.name = "Luna"; // ini akan error, tidak bisa write.

    //implementasi setter
    player1.addExperience(50);
    player1.display();
    player1.addExperience(50);
    player1.display();

    return 0;
}
