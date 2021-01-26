#include<iostream>
using namespace std;

int main(){

    int a = 5;

    //pointer untuk membuat addressing a
    //pointer selalu bertipe data integer
    // int *aPtr = &a;

    //null pointer / pointer dengan alamat kosong
    int *aPtr = nullptr;
    aPtr = &a;

    //keluarkan nilai a
    cout << "nilai a adalah : " << a << endl;

    //keluarkan alamat data a (address a)
    cout << "alamat a adalah : " << aPtr << endl;

    //dereferencing mengambil nilai dari suatu alamat pointer
    cout << "nilai dari pointer/alamat : " << *aPtr << endl;

    cin.get();
    return 0;

}
