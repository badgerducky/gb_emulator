// cpu.cpp : Defines the GB CPU

#include "cpu.h"

void get_instruction(unsigned char *rom, int64_t index)
{
    printf("%u ", rom[index]); // prints a byte

    switch (rom[index])
    {
    case 0x00:
        std::cout << "00" << std::endl;
        break;
    case 0x01:
        std::cout << "01" << std::endl;
        break;
    case 0xff:
        std::cout << "FF" << std::endl;
        break;
    }
}
