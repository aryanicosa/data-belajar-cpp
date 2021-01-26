#include <iostream>
#include <string>

//eksternal file
#include "Mahasiswa.hpp"

using namespace std;

int main()
{
    Mahasiswa* mahasiswa1 = new Mahasiswa("uming");
    cout << mahasiswa1->namePublic << endl; // bisa diakses karena public
    // cout << mahasiswa1->namePrivate << endl; // tidak bisa diakses karena private

    Mahasiswa* mahasiswa2 = new Mahasiswa("kondor");
    mahasiswa2->showDisplay(); // bisa diakses karena method public berisi fungsi untuk display isi class meskipun attribute nya prvate

    return 0;
}
