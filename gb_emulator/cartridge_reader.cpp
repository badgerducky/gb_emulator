// cartridge_reader.cpp : Defines the GB cartridge reader, so it reads from a .gb and produces hex

#include <sys/stat.h>
#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
using std::ios;

struct stat results;
int64_t get_file_size_bytes(const char *filename)
{
    if (stat(filename, &results) == 0)
    {
        // The size of the file in bytes is in
        cout << "Size of input file in bytes: " << results.st_size << endl;
        cout << "File found" << endl
             << endl;
    }
    else
    {
        // An error occurred
        cout << "File not found" << endl;
    }
    return (results.st_size);
}

void load_rom(const char *filename, int64_t *rom_size, unsigned char *rom)
{
    std::ifstream rom_file(filename, ios::in | ios::binary);
    if (rom_file)
    {
        FILE *ptr;
        ptr = fopen(filename, "rb");   // r for read, b for binary
        fread(rom, 1, *rom_size, ptr); // read all bytes from file into rom
        fclose(ptr);
    }
}
