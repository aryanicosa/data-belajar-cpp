#include <iostream>

using namespace std;

int main()
{
    float a,b, hasil;
    char aritmatika;
    cout << "kalkulator" << endl;

    //masukan input
    cout << "masukan nilai ";
    cin >> a;
    cout << "pilih operator";
    cin >> aritmatika;
    cout << "nilai kedua ";
    cin >> b;

    cout << "\nHasil Hitung: ";
    cout << a << aritmatika << b << endl;

    if (aritmatika == '+') {
        hasil = a + b;
    }

    cout << "hasil = " << hasil << endl;

    cin.get();
    return 0;
}
