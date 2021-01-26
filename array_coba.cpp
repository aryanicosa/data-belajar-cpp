#include <iostream>

using namespace std;

string daftar [2][2] =
{
    {"umir", "rifki"},
    {"yusi", "arya"}
};

int main()
{


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "baris ke : " << i << " kolom ke : " << j << " adalah " << daftar[i][j]  << endl;
        }
    }

    cin.get();
    return 0;
}
