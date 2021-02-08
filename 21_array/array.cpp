#include<iostream>
#include<array>

using namespace std;

int main() {

    //membuat array dengan standar library
    array <int,5> nilai;

    cout << "program menampilkan grafik nilai" << endl << endl;

    //iterasi memasukan nilai array
    for (int i = 0; i < nilai.size(); i++) {
        cout << "jumlah mahasiswa dengan nilai : ";
        if (i == 0) {
            cout << "0-20 : ";
        } else if (i == 5) {
            cout << endl;
        } else {
            cout << i*20 << "-" << (i*20)+20 << " : " ;
        }
        cin >> nilai[i];
    }

    cout << endl;

    //tampilkan dalam grafik bintang

    for (int i = 0; i <= nilai.size(); i++) {
        if (i == 0) {
            cout << "0-20 : ";
        } else if (i == 5) {
            cout << endl;
        } else {
            cout << i*20 << "-" << (i*20) + 20 << " : ";
        }

        for (int bintang = 0; bintang < nilai[i]; bintang++) {
            cout << "*";
        }
        cout << endl;
    }


    /*
    //iterasi memasukan nilai array
    for (int i = 0; i <= 4; i++) {
        nilai[i] = i;
        cout << "nilai ke [" << i << "]" << nilai[i];
        cout << "addresnya : " << &nilai[i] << endl << endl;
    }

    //fungsi pada standar library

    //ukuran array
    cout << "ukuran : " << nilai.size() << endl;
    //addres awal array
    cout << "address awal : " << nilai.begin() << endl;
    //address akhir array
    cout << "address akhir : " << nilai.end() << endl;
    //nilai pada index
    cout << "nilai pada index ke 3 : " << nilai.at(3) << endl;
    */

    cin.get();
    return 0;
}
