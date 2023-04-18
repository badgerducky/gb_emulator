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
        cout << "Size of input file in bytes: " << results.st_size << endl;
        cout << "File found" << endl << endl;
    }
    else {
        // An error occurred
        cout << "File not found" << endl;
    }
}

void load_rom(const char * filename, int64_t * rom_size, unsigned char * rom){
    std::ifstream rom_file (filename, ios::in | ios::binary);
    if (rom_file){
        // get length of file:
        rom_file.seekg (0, rom_file.end);
        const int64_t length = rom_file.tellg();
        rom_file.seekg (0, rom_file.beg);

        // set length to var accessible from main
        *rom_size = length;

        // Read file with mostly C things
        rom = new unsigned char [length];
        FILE *ptr;
        ptr = fopen(filename,"rb");  // r for read, b for binary
        fread(rom,1,length,ptr); // read all bytes from file into rom
        // ToDo: Does this need a closer?

    }
}
