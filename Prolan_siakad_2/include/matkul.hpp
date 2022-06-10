#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__


#include <iostream>
#include <vector>
#include <string>

class matkul {

private:
    std::string matakuliah;
    int sks;

public:
    matkul(std::string matakuliah, int sks);

    void setmatkul(std::string matakuliah);
    std::string getmatkul();

    void setsks(int sks);
    int getsks();


};



#endif