#include <iostream>
#include <string>

using namespace std;

int getOption(){
    int input;
    system("cls"); //menghapus tampilan sebelumnya data pada console
    cout << "\nProgram CRUD sederhana" << endl;
    cout << "________________________" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Tampilkan data mahasiswa" << endl;
    cout << "3. Ubah data mahasiswa" << endl;
    cout << "4. Hapus data mahasiswa" << endl;
    cout << "5. Selesai?" << endl;
    cout << "________________________" << endl;
    cout << "pilh [1-5]?";
    cin >> input;
    return input;
}

int main(){

    int pilihan = getOption();
    char is_continue;

    enum option{CREATE=1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH){
        switch(pilihan){
        case CREATE:
            cout << "Menambah data mahasiswa" << endl;
            break;
        case READ:
            cout << "Menampilkan data mahasiswa" << endl;
            break;
        case UPDATE:
            cout << "Mengubah data mahasiswa" << endl;
            break;
        case DELETE:
            cout << "Menghapus data mahasiswa" << endl;
            break;
        default:
            cout << "pilihan tidak tersedia!" << endl;
            break;

        }
        label_continue:

        cout << "lanjutkan?(y/n) : ";
        cin >> is_continue;
        if ((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = getOption();
        } else if ((is_continue == 'n') | (is_continue == 'N')){
            break;
        } else {
        goto label_continue;
        }

    }

    cout << "program selesai" << endl;

    cin.get();
    return 0;
}
