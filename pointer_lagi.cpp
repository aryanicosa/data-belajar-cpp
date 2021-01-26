#include<iostream>
using namespace std;

int main() {

    int i;
    int *iPtr = &i;
    int &j = i;

    cout << "masukan nilai variabel : ";
    cin >> i;
    cout << "alamat variable i      : " << &i << endl;
    cout << "isi alamat tsb adalah  : " << *iPtr << endl;

    cout << "ganti nilai variable   : ";
    cin >> j;
    cout << "isi variabel i skr     : " << i << endl;
    cout << "alamat variable j      : " << &j << endl;
    cout << "besar data pada alamat : " << sizeof(j) << endl;
    cin.get();
    return 0;

}
