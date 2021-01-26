#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan nilai = ";
    cin >> a;

    switch  (a) {
    case 5:
        cout << "ini 5" << endl;
        break;
    case 4:
        cout << "ini 4" << endl;
        break;
    default:
        cout << "ini default" << endl;
    }

    return 0;
}
