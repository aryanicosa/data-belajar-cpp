#include<iostream>
#include<string>

using namespace std;


int main(){
    int a,b;
    string hasil1, hasil2, output;

    hasil1 = "anjai";
    hasil2 = "anjim";

    cout << "masukkan nilai a: ";
    cin >> a;

    cout << "masukkan nilai b: ";
    cin >> b;

    //menggunakan operator ternary
    output = (a < b) ? hasil1 : hasil2 ;
    cout << output << endl;

    //menggunakan kondisi if else
    if (a > b) {
        output = hasil2;
    } else{
        output = hasil1;
    }

    cout << output << endl;


    cin.get();
    return 0;

}
