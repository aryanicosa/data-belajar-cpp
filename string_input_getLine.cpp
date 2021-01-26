#include<iostream>
#include<string>

using namespace std;

int main() {

    string kalimat_input;

    cout << "masukkan kalimat :";
    getline(cin,kalimat_input);

    cout << "kalimat anda :" << kalimat_input << endl;

    //hitung jumlah kata dalam kalimat

    int posisi = 0;
    int jumlahKata = 0;

    while(true) {
        posisi = kalimat_input.find(" ", posisi+1);
        jumlahKata++;
        //cek
        cout << "jumalah kata : " << jumlahKata <<endl;

        //jika sudah habis, maka akan kembali ke 0
        //jadi di hentikan
        if (posisi < 0){
            break;
        }
    }

    cout << "jumlah kata dalam kalimat anda: " << jumlahKata << endl;

    cin.get();
    return 0;
}
