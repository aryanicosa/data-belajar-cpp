#include <iostream>
#include "Mahasiswa.hpp"

//penjabaran method di file terpisah
Mahasiswa::Mahasiswa(const char* name){
        this->namePublic = name;
        this->namePrivate = name;
    }

void Mahasiswa::showDisplay(){
        std::cout << this->namePrivate << std::endl; // bisa mengakses private member karena 1 class
    }
