#include <iostream>

using namespace std;

//constructor akan dieksekusi/dipanggil diawal program berjalan

//class dengan constructor
class Mahasiswa{
public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;

    //constructor dengan paramater
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK){
        Mahasiswa::nama = inputNama; // masukkan inputNama ke member nama dari class Mahasiswa
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::jurusan = inputJurusan;
        Mahasiswa::IPK = inputIPK;
    }

    //function/method untuk display tanpa parameter dan tanpa return
    void tampilkanData(){
        cout << nama << endl;
        cout << NIM << endl;
        cout << jurusan << endl;
        cout << IPK << endl;
        cout << "\n";
    }

    //function/method dengan parameter dan tanpa return
    void ubahNama(const char* namaBaru){
        Mahasiswa::nama = namaBaru;
    }

    //function/method tanpa parameter dan dengan return
    string getNama(){
        return Mahasiswa::nama;
    }

    double getIPK(){
        return Mahasiswa::IPK;
    }

    //function/method dengan parameter dan return
    double katrolIPK(const double &tambahNilai){
        return Mahasiswa::IPK + tambahNilai;
    }

};

int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", "0214820", "teknik masak", 1.89);
    Mahasiswa mahasiswa2 = Mahasiswa("susanti", "0214821", "teknik berlari", 1.89);

    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    //ubah nama dengan fungsi di dalam class, kemudian tampilkan
    mahasiswa1.ubahNama("samson");
    mahasiswa1.tampilkanData();

    //ambil data mahasiswa di dalam class
    cout << "nama saya : " << mahasiswa1.getNama() << endl;
    cout << "IPK saya : " << mahasiswa1.getIPK() << endl;

    //jalankan fungsi tambah nilai
    cout << "\nini hasil penambahan nilai" << endl;
    cout << mahasiswa1.katrolIPK(1.00) << endl;

    cin.get();
    return 0;
}
