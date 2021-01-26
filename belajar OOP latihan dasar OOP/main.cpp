#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
public:
    string nama;
    string NIM;
    string jurusan;

    //constructor
    Mahasiswa(string inputNama,string inputNIM, string inputJurusan){
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::jurusan = inputJurusan;
    }

    string stringify(){
        return "\n" + nama + " " + NIM + " " + jurusan;
    }

};

class DBase{
public:
    ifstream in;
    ofstream out;
    string fileName;

    //constructor
    DBase(const char* inputFileName){
        DBase::fileName = inputFileName;
    }

    void save (Mahasiswa data){
        cout << data.nama << endl;
        cout << data.NIM << endl;
        cout << data.jurusan << endl;

        DBase::out.open(DBase::fileName,ios::app);
        cout << data.stringify() << endl; // untuk menampilkan saja
        DBase::out << data.stringify();
        DBase::out.close();
    }

    void showAll(){
        DBase::in.open(DBase::fileName,ios::in);
        string nama, NIM, jurusan;
        int index = 1;

        while (!DBase::in.eof()){
            DBase::in >> nama;
            DBase::in >> NIM;
            DBase::in >> jurusan;

            cout << index++ << "." ;
            cout << nama << " " ;
            cout << NIM << " " ;
            cout << jurusan << " " << endl;
        }
        DBase::in.close();
    }

};

int main()
{
    //ambil databasenya
    DBase database = DBase("data.txt");
    //tampilkan isi file data.txt
    database.showAll();

    string nama, NIM, jurusan;
    cout << "Masukkan data mahasiswa" << endl;
    cout << "Nama : ";
    cin >> nama;
    cout << "NIM : ";
    cin >> NIM;
    cout << "Jurusan : ";
    cin >> jurusan;

    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);

    //save data diatas ke database kemudian tampilkan
    database.save(dataMahasiswa);

    cin.get();
    return 0;
}
