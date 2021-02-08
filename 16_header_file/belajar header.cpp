#include <iostream>
#include "tryHeader.h"

using namespace std;

int main() {
    string x;
    cin >> x;

    if (x == "aku") {
        cout << x << " sayang " << cetak() << endl;
    } else {
        cout << "gelut kita!" << endl;
        return 1;
    }

    cin.get();
    return 0;
}
