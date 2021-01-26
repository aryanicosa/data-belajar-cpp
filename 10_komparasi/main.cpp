#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 2;

    bool hasil1, hasil2, hasil3, hasil4;
    hasil1 = (a == b);
    hasil2 = (a != b);
    hasil3 = (a < b);
    hasil3 = (a > b);

    //pembanding, relation expression
    cout << "hasil 1: " << hasil1 << endl;
    cout << "hasil 2: " << hasil2 << endl;
    cout << "hasil 3: " << hasil3 << endl;
    cout << "hasil 4: " << hasil4 << endl;

    cin.get();
    return 0;
}
