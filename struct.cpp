#include <iostream>
#include <string>

using namespace std;

//struct adalah data yang terbentuk dari
//beberapa data

/*
struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};
*/

struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul;
    string genre;
    int tahun;
    //ambil struct aktor
    aktor pemeran_1;
    aktor pemeran_2;

};

int main(){

    aktor aktor1, aktor2;
    film film1, film2;

    //buat variabel aktor
    aktor1.nama = "Anjai";
    aktor1.tahun_lahir = 1990;

    aktor2.nama = "anjim";
    aktor2.tahun_lahir = 2020;

    //buat variabel film

    film1.judul = "bucin";
    film1.genre = "gajelas";
    film1.tahun = 2029;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    film2.judul = "lolo";
    film2.genre = "bengak";
    film2.tahun = 2029;
    film2.pemeran_1 = aktor2;
    film2.pemeran_2 = aktor1;

    cout << film1.judul << endl;
    cout << film1.genre << endl;
    cout << film1.tahun << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl << endl;

    cout << film2.judul << endl;
    cout << film2.genre << endl;
    cout << film2.tahun << endl;
    cout << film2.pemeran_1.nama << endl;
    cout << film2.pemeran_2.nama << endl;
    /*
    //struct biasa
    buah apel;

    apel.warna = "hijau";
    apel.berat = 35.10;
    apel.harga = 3000;
    apel.rasa = "manis";


    cout << apel.warna << endl;
    cout << apel.berat << endl;
    cout << apel.harga<< endl;
    cout << apel.rasa << endl;
    */



    cin.get();
    return 0;
}
