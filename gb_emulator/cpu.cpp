// cpu.cpp : Defines the GB CPU

#include "cpu.h"

void get_instruction(unsigned char * rom, int64_t index){
    printf("%u ", rom[index]); // prints a byte
    //create a bitset var for a byte
    std::bitset<8> byte(rom[index]);
    cout << byte << endl;
    std::cout << "End" << std::endl;
}
