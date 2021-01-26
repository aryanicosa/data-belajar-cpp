#include <iostream>

using namespace std;

class mahasiswa{ // kelas mahasiswa
public: // status akses publik
    int nim; //member object 1
    string nama; // member object 2
    float nilai; // member object 3
    void printData(){
        cout<<"NIM   \t= "<<nim<<endl;
        cout<<"Nama  \t= "<<nama<<endl;
        cout<<"Nilai \t= "<<nilai<<endl;
    }
}anton; // deklarasi object di dalam class

class mahasiswa2{
public:
    int nim = 2222;
    string nama = "Budi Bara Bere";
    float nilai = 0;

    void printDataMahasiswa2(){
        cout << "NIM    \t= " << nim << endl;
        cout << "Nama   \t= " << nama << endl;
        cout << "Nilai  \t= " << nilai << endl;
    }
};

int main()
{
    mahasiswa2 budi; //deklarasi  object diluar kelas
    //atau
    class mahasiswa2 tono {1111, "Tono sutono", 90}; //deklarasi  object diluar kelas;

    cout << "==Anton==" << endl;
    anton.nim = 1234;
    anton.nama = "Anton Rizki Prabhara";
    anton.nilai = 100;
    anton.printData();

    cout << "" << endl;
    cout << "==Budi==" << endl;
    budi.printDataMahasiswa2();

    cout << "" << endl;
    cout << "==Tono==" << endl;
    tono.printDataMahasiswa2();

    cin.get();
    return 0;
}
