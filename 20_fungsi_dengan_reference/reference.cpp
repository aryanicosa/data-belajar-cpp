#include<iostream>
using namespace std;

int main(){

    int a = 5;

    //keluarkan nilai a
    cout << "nilai a adalah : " << a << endl;

    //keluarkan alamat data a (address a)
    cout << "alamat a adalah : " << &a << endl;

    //sharing alamat antara a dan b (reference)
    int &b = a;

    cout << "nilai b adalah : " << b << endl;
    cout << "alamat b adalah : " << &b << endl;

    //ganti nilai a dengan mengganti b
    b = 15;
    cout << "nilai a adalah : " << a << endl;
    cout << "alamat b adalah : " << b << endl;

    //ganti lagi nilai b dengan mengganti a
    a = 30;
    cout << "nilai a adalah : " << a << endl;
    cout << "alamat b adalah : " << b << endl;

    cin.get();
    return 0;

}
