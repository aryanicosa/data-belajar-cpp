#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

//membuat tipe data mahasiswa
struct Mahasiswa{
    int pk;
    string NIM;
    string nama;
    string jurusan;
};

int getOption();
void checkDatabase(fstream &data);

void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa){
    data.seekp((posisi-1)*sizeof(Mahasiswa), ios::beg); //cari posisi data dari awal
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}

int getDataSize(fstream &data){
    int start, end;
    data.seekg(0,ios::beg);
    start = data.tellg();
    data.seekg(ios::end);
    end = data.tellg();
    return (end-start)/sizeof(Mahasiswa);
}

Mahasiswa readData(fstream &data, int posisi){
    Mahasiswa readMahasiswa;
    data.seekg((posisi-1)*sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa), sizeof(Mahasiswa));
    return readMahasiswa;
}

void addDataMahasiswa(fstream &data){
    Mahasiswa inputMahasiswa, lastMahasiswa;

    int size = getDataSize(data);

    cout << "ukuran data : " << size << endl;
    //readData(data,size);

    //logika membaca ukuran data
    if (size == 0){
      inputMahasiswa.pk = 1; // harus ada data sebelumnya
    } else {
       lastMahasiswa = readData(data,size);
       inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }

    //inputMahasiswa.pk = 1; // harus ada data sebelumnya
    cout << "Nama : ";
    getline(cin, inputMahasiswa.nama);
    cout << "NIM : ";
    getline(cin, inputMahasiswa.NIM);
    cout << "jurusan : ";
    getline(cin, inputMahasiswa.jurusan);

    writeData(data, size+1, inputMahasiswa);
}

int main(){
    fstream data;

    checkDatabase(data);

    int pilihan = getOption();
    char is_continue;

    enum option{CREATE=1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH){
        switch(pilihan){
        case CREATE:
            cout << "Menambah data mahasiswa" << endl;
            addDataMahasiswa(data);
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

void checkDatabase(fstream &data){
    //baca data
    data.open("data.bin", ios::out | ios::in | ios::binary);

    //check file
    if(data.is_open()){
        cout << "database ditemukan" << endl;
    } else {
        cout << "database tidak ditemukan, dibuat database baru" << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::in);
    }
}

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
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); // mengabaikan angka di depan line baru
    return input;
}

