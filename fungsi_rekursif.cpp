#include<iostream>

using namespace std;

//rekursif fibonaci -- kurang cocok di rekursif
//lebih baik iterasi biasa karena ini akan
//memanggil semua cabang perkalian

// prototipe

int fibonaci(int n);

int main() {
    int angka, hasil;

    cout << "hitung fibonaci ke - n : ";
    cin >> angka;

    hasil = fibonaci(angka);
    cout << "nilainya : ";
    cout << hasil << endl;

    cin.get();
    return 0;
}

//fungsi asli

int fibonaci(int n){

    if ((n ==0) || (n == 1)) {
        return n;
    } else {
        return fibonaci(n-1) + fibonaci(n-2);
    }
}

/* rekursif faktorial
//fungsi prototipe
int faktorial(int n);

int main() {

    int angka, hasil;
    cout << "menghitung faktorial dari : ";
    cin >> angka;

    hasil = faktorial(angka);
    cout << "\nnilainya adalah : " << hasil << endl;

    cin.get();
    return 0;
}

//fungsi asli
int faktorial(int n) {
    if (n <= 1) { // pembatas akhir agar tidak infinite loop
        cout << n;
        return n;
    } else {
        cout << n << "*";
        return n * faktorial(n-1);
    }

}

*/
