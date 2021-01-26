#include<iostream>
using namespace std;

//prototipe
void fungsi(int &);
void kuadrat(int &);

int main(){

    int a = 5;

    cout << "address a : " << &a << endl;
    cout << " nilai a : " << a << endl;

    //fungsi(a); //fungsi dengan input reference

    kuadrat(a);

    cout << " nilai kuadrat a : " << a << endl;

    cin.get();
    return 0;
}

void fungsi(int &b) {
    cout << "address b :" << &b << endl;
    cout << " nilai b :" << b << endl;

    b = 60;
}

void kuadrat(int &valRef) {
    valRef = valRef * valRef;
}
