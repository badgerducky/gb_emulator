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
    case 0x02:
        std::cout << "00" << std::endl;
        break;
    case 0x03:
        std::cout << "01" << std::endl;
        break;
    case 0x40 ... 0:
        std::cout << "LD BC" << std::endl;
        break;
    case 0xff:
        std::cout << "RST 38H" << std::endl;
        break;
    }
    // Todo:
}
