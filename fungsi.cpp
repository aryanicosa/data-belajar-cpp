#include <iostream>
//#include <cstdlib> // mengandung fungsi random
//#include <cmath> // fungsi matematika

using namespace std;

//fungsi prototipe dengan default argumen
double volum(double p = 1, double l = 1, double t = 1);

int main()
{
    double p,l;
    cin >> p;
    cin >> l;
    cout << "volume kubus: " << volum(p,l) << endl;
    cin.get();
    return 0;

}

//fungsi aslinya dibawah
double volum(double p, double l, double t)
{
    return p*l*t;
}



/*
//fungsi menghitung luas persegi
double hitung_luas(double p, double l) {
    double luas = p * l;
    return luas;
}

double hitung_keliling(double p, double l) {
    double keliling = 2 * (p + l);
    return keliling;
}

void tampilkan_luas(double p, double l) {
    cout << "hitung menggunakan void\n";
    cout << "luasnya : ";
    cout << hitung_luas(p,l) << endl;
}

void tampilkan_keliling(double p, double l) {
    cout << "hitung menggunakan void\n";
    cout << "kelilingnya : ";
    cout << hitung_keliling(p,l) << endl;
}

int main() {
    double panjang, lebar;
    cout << "masukkan panjang : ";
    cin >> panjang;
    cout << "masukkan lebar : ";
    cin >> lebar;

    tampilkan_luas(panjang, lebar);
    tampilkan_keliling(panjang, lebar);
    /*
    int x;

    cout << "menghitung akar x: ";
    cin >> x;

    double y = sqrt(x);
    cout << "akarnya = " << y << endl;
    */

/* dadu2
char lanjut;
while(true) {
    cout <<  "Lempar dadu (y/n) : ";
    cin >> lanjut;
    if (lanjut == 'y') {
        cout << 1 +rand() % 6 << endl; //membuat angka random 1-6
    } else if (lanjut == 'n') {
        break;
    } else {
        cout << "cuma bisa pilih y/n" << endl;
    }
}
*/

/*
for (int i = 0; i < 10; i++) {
    cout << 1 +rand() % 6 << endl; //membuat angka random 1-6
}
*/

