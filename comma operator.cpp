#include<iostream>
#include<string>

using namespace std;

void printNilai(int val){
    cout << val << endl;
}

int main() {

    //menggunakan comma operator
    int a,b,c;
    //fungsi/expression terakhir di dalam kurung
    //akan dikembalikan ke nilai a
    a = ( b=1 , printNilai(b), c=2 , printNilai(c), (b+c));

    //bisa dimanipulasi untuk menjalankan fungsi di dalam
    //kuurung dengan menambahakan koma

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cin.get();
    return 0;
}
