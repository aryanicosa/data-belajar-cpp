#include<iostream>
#include<fstream> //ofstream ,ifstream, fstream

using namespace std;

int main() {

    ofstream myFile;

    //ios::out = default memberi input pada file
    //ios::app = menuliskan pada akhir baris/append
    //ios::trunc = default membuat file baru

    myFile.open("data1.txt", ios::out);
    myFile << "Menuliskan file baru file 1";
    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "Menuliskan file baru file 2 overwrite";
    myFile.close();

    int a = 1234567;
    myFile.open("data3.txt", ios::app);
    myFile << "\nMenuliskan kalimat baru file 3 sebelumnya\n";
    myFile << a;
    myFile.close();

}

