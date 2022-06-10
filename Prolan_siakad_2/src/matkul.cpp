#include <iostream>
#include <vector>

#include "include/matkul.hpp"

matkul::matkul(std::string matakuliah, int sks) 
{

}

void matkul::setmatkul(std::string matakuliah) 
{
    this->matakuliah = matakuliah;
}

std::string matkul::getmatkul()
{
    return this->matakuliah;
}

void matkul::setsks(int sks)
{
    this->sks = sks;
}

int matkul::getsks()
{
    return this->sks;
}



