// cpu.cpp : Defines the GB CPU

#include "cpu.h"

void get_byte(unsigned char * buffer, int64_t index){
    printf("%u ", buffer[index]); // prints a byte
    //create a bitset var for a byte
    std::bitset<8> byte(buffer[index]);
    cout << byte << endl;
    std::cout << "End" << std::endl;
}
