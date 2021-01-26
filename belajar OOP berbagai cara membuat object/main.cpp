#include <iostream>

using namespace std;

class DenganConstructor{
public:
    string data;

    DenganConstructor(const char* inputData){
        DenganConstructor::data = inputData;
    }

    void show(){
        cout << "ini " << DenganConstructor::data << endl;
    }

};

class TanpaConstructor{
public:
    string data;

    void show(){
        cout << "ini " << TanpaConstructor::data << endl;
    }
};


int main()
{
    //1. Tanpa constructor
    TanpaConstructor object1;
    object1.data = "object 1";
    object1.show();

    //2. Dengan constructor
    DenganConstructor object2 = DenganConstructor("Object 2");
    object2.show();

    //3. cara lain dengan constructor
    DenganConstructor object3("Object 3");
    object3.show();

    // 3 cara diatas object berada pada stack

    //4. cara membuat object pada heap memory
    DenganConstructor* object4 = new DenganConstructor("object 4");
    (*object4).show(); // secara dereference
    //atau
    object4 -> show(); // menggunakan arrow operator. mapping function atau atribute dengan pointer
    // atau bisa memanggil langsung dengan arrow operator
    string data = object4 -> data;
    cout << data << endl;

    //bisa juga dengan cara
    DenganConstructor* object5;
    object5 = new DenganConstructor("object 5");
    object5 -> show();

    cin.get();
    return 0;
}
