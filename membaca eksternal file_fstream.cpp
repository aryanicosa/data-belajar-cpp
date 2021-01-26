#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    ifstream myFile;
    string output,buffer; //untuk wadah output dan buffer output
    bool isData = false; //mencari data
    //mencari data sesuai format
    int no;
    string nama;

    // ios::in membaca data dari depan (default)
    // ios::ate membaca dari belakang/akhir
    // ios::binary membaca data binary

    myFile.open("data4_read.txt", ios::in);

    while(!isData){
        getline(myFile, buffer);
        output.append("\n" + buffer);
        if (buffer == "data"){
            isData = true;
        }
    }
    // fungsi diata hanya akan menampilkan
    //sampai bertemu kata "data"
    cout << output << endl;

    //melanjutkan menampilkan data sampai akhir
    //sesuai format dan menghitung
    //jumlah kata dalam data
    getline(myFile, buffer);
    cout << buffer << endl;
    int jumlahData = 0;
    while (!myFile.eof()){
        myFile >> no;
        myFile >> nama;

        cout <<  no << "\t" << nama << endl;
        jumlahData++;
    }
    cout << "jumlah data : " << jumlahData << endl;

    cin.get();
    return 0;
}
