// cartridge_reader.cpp : Defines the GB cartridge reader, so it reads from a .gb and produces hex

#include <sys/stat.h>
#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
using std::ios;

struct stat results;
void get_file_size_bytes(const char * filename){
    if (stat(filename, &results) == 0) {
        // The size of the file in bytes is in
        cout << results.st_size << endl;
    }
    else {
        // An error occurred
        cout << "File not found" << endl;
    }
}

unsigned char * load_rom(const char * filename, int64_t * rom_size){
    std::cout << filename << std::endl;
    std::ifstream rom_file (filename, ios::in | ios::binary);
    if (rom_file){
        // get length of file:
        rom_file.seekg (0, rom_file.end);
        const int64_t length = rom_file.tellg();
        rom_file.seekg (0, rom_file.beg);

        // set length to var accessible from main
        *rom_size = length;

        // Read file with mostly C things
        std::cout << "Start read file with C things" << std::endl;
        unsigned char * buffer = new unsigned char [length];
        FILE *ptr;
        ptr = fopen(filename,"rb");  // r for read, b for binary
        fread(buffer,1,length,ptr); // read all bytes from file into buffer


        // Read file the "C++ way"
        char * rom = new char [length];
        std::cout << "Reading " << length << " characters... ";

        // read data as a block:
        rom_file.read (rom, length);

        if (rom_file)
        std::cout << "all characters read successfully.";
        else
        std::cout << "error: only " << rom_file.gcount() << " could be read";
        rom_file.close();
        size_t len = sizeof(rom_file);
        cout << len << endl;
        // ...buffer contains the entire file...

        delete[] rom;

        return(buffer);
    }
}
