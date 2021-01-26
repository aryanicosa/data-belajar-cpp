#include <iostream>
#include <string>

using namespace std;

//friend class
class siswa;

class orang{
private:
    string nama;
public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa {
private:
    int id;
public:
    void setId(int pId);
    void displayAll(orang &a);
};

void siswa::displayAll(orang &a){
    cout << id << endl << a.nama;
}

void orang::setNama(string pNama){
    nama = pNama;
}

void siswa::setId(int pId){
    id = pId;
}

int main()
{
    orang budi;
    budi.setNama("Budi aja");
    siswa budi_siswa;
    budi_siswa.setId(1);
    budi_siswa.displayAll(budi);

    cin.get();
    return 0;
}
