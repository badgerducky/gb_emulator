// cpu.h :

#pragma once

#include <stdint.h>
#include <iostream>
#include <fstream>
using std::cout;
using std::endl;
using std::ios;


class CPU
{
private:
    // Registers
    uint8_t accumulator = 0b00000000;
    uint8_t flags_reg = 0b00000000;
    uint8_t b_register = 0b00000000;
    uint8_t c_register = 0b00000000;
    uint8_t d_register = 0b00000000;
    uint8_t e_register = 0b00000000;
    uint8_t h_register = 0b00000000;
    uint8_t l_register = 0b00000000;
    uint16_t sp_register = 0b0000000000000000;
    uint16_t pc_register = 0b0000000000000000;
    //8 bit registers: a b c d e h l hl (Value at memory location pointed to by hl register)
    //16 bit registers: b+c d+e hl sp
    //flags Zero, ?, ?, Carry
    enum FLAGS {Z, N, H, C};

public:
    CPU(/* args */);
    ~CPU();
};

CPU::CPU(/* args */)
{
}

CPU::~CPU()
{
}
