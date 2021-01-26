#include <iostream>
#include <string>

using namespace std;

class Player{
public:
    string nama;

    //constructor
    Player(const char* nama){
        Player::nama = nama;
        cout << "player : " << Player::nama << " sudah dibuat" << endl;
    }

    //destructor
    ~Player(){
        cout << "player : " << Player::nama << " sudah dihapus" << endl;
    }
};

void membuatPlayerStack(){
    Player stackPlayer = Player("stack");
}

void membuatPlayerHeap(){
    Player* heapPlayer = new Player("heap");
    delete heapPlayer;
}

int main(){
    membuatPlayerStack();
    membuatPlayerHeap();

    return 0;
}
