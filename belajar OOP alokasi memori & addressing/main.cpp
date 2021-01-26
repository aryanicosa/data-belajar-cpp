#include <iostream>
#include <string>
#include <chrono>

using namespace std;

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Kosong {
public:
    int dataInt1;
    int dataInt2;

    int data(){
        return 1;
    }
};

class Isi {
public:
    int dataInt1;
    int dataInt2;
    double dataDouble;
    string dataStr;
};

class Mahasiswa{
public:
    string nama;

    Mahasiswa(const char* nama){
        Mahasiswa::nama = nama;
    }
};

int main()
{
    //besaran memori sebuah object akan tergantung dari variabel/member dalam object
    //tampilkan besar memori
    cout << "alokasi memori class Kosong : " << sizeof(Kosong) << endl;
    cout << "alokasi memori class Isi : " << sizeof(Isi) << endl;

    //adressing pada stack
    string a;
    string b;
    Mahasiswa object1 = Mahasiswa("Ucup");
    //addressing pada Heap
    Mahasiswa* object2 = new Mahasiswa("Otong");
    string c;
    string d;

    cout << "\nAddress Stack" << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &object1 << endl;
    cout << &object2 << endl; // address pointer akan tetap berada pada stack
    cout << "Address Heap : " << object2 << endl; // address object berada di heap
    //adress object2 (sebagai variabel) berada di stack, sedangkan object2 itu sendiri adalah adress dari new Mahasiswa
    cout << &c << endl;
    cout << &d << endl;

    //mengambil waktu pembuatan object

    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    *tStackStart = Clock::now();
    Mahasiswa object3 = Mahasiswa("anjai");
    *tStackEnd = Clock::now();

    cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa* object4 = new Mahasiswa("asem");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackStart - *tStackEnd;
    cout << "Waktu membuat object di stack : " << durasi.count() << endl;

    durasi = *tHeapStart - *tHeapEnd;
    cout << "Waktu membuat object di heap : " << durasi.count() << endl;

    //pembuatan object di stack lebih cepat daripada di heap
    //tetapi jika stack terlalu penuh akan membuat program crash / stack overflow

    return 0;
}
