#include<iostream>
#include<string>
using namespace std;

int main()
{

    string data = "oki doki";
    string data2 = "anjai";

    //akses substring substr(index,panjang)
    cout << data.substr(4,4) << endl;

    // mencari substring
    cout << data.find("doki") << endl;

    //mencari posisi potongan kata
    int a = data.find("oki");
    cout << "posisi pertama " << a << endl;
    cout << "posisi kedua " << data.find("oki", a + 1) << endl;

    //mencari posisi potongan kata dari belakang -> rfind
    cout << "posisi ketiga " << data.rfind("do") << endl;

    //menukar string swap
    cout << data << endl;
    cout << data2 << endl;

    cout << "dibalik" << endl;
    data.swap(data2);
    cout << data << endl;
    cout << data2 << endl;

    //replace string
    cout << "diganti" << endl;
    data2.replace(4,4, "yess");
    cout << data << endl;
    cout << data2 << endl;

    //dari fungsi find and replace bisa dimanfaatkan
    //untuk mentukan data yang akan ditukar

    //menyelipkan data, insert
    data2.insert(4, "oke mama");
    cout << data2 << endl;

    cin.get();
    return 0;
}
