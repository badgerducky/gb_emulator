// cartridge_reader.cpp : Defines the GB cartridge reader, so it reads from a .gb and produces hex

#include <sys/stat.h>
#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
using std::ios;

struct stat results;
int get_file_size(){
    if (stat("input.bin", &results) == 0) {
        // The size of the file in bytes is in
        cout << results.st_size << endl;
    }
    else {
        // An error occurred
        cout << "File not found" << endl;
    }
}

char get_bytes(){
    std::ifstream myFile ("input.bin", ios::in | ios::binary);
}
