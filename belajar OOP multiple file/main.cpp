#include <iostream>
#include <string>

//eksternal definition
#include "Player.h"

using namespace std;

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


