#include <iostream>

using namespace std;

//akses member object melalui pointer
//nama_object = nama_member

class siswa {
public:
    int noInduk;
    void showNoInduk() {
        cout << "No Induk = " << noInduk << endl;
    }
};


int main()
{
    cout << "menunjukkan ke object pada class yang sama" << endl;

    siswa budi {1}; //object budi
    budi.showNoInduk(); // member acces operator

    cout << "" << endl;
    cout << "pointer reference" << endl;
    siswa &refBudi = budi; //pointer reference refBudi
    refBudi.noInduk = 2; //member access operator
    budi.showNoInduk();

    cout << "" << endl;
    cout << "pointer dereference" << endl;
    siswa *pBudi = &budi; //pointer dereference
    pBudi -> noInduk = 3; //arrow operator
    budi.showNoInduk();

    cout << "" << endl;
    cout << "menggunakan alokasi pointer" << endl;
    siswa *anton = new siswa {1};
    anton -> showNoInduk();
    cout << "isi memori diganti" << endl;
    anton -> noInduk = 2;
    anton -> showNoInduk();
    delete anton;

    cin.get();
    return 0;
}
