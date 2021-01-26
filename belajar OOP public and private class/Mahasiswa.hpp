#ifndef __MAHASISWA
#define __MAHASISWA

#include <iostream>
#include <string>

class Mahasiswa{
//attribute
public:
    std::string namePublic;

private:
    std::string namePrivate;

//prototipe constructor and method, penjabaran ada di file Mahasiswa.cpp
public:
    Mahasiswa(const char*);
    void showDisplay();

};

#endif __MAHASISWA
