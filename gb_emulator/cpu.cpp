// cpu.cpp : Defines the GB CPU

#include "cpu.h"

void get_first_byte(unsigned char * buffer, int64_t rom_size){
    for(int64_t i = 0; i<1; i++)
        printf("%u ", buffer[i]); // prints a byte
    std::cout << "End" << std::endl;
}
