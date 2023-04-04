// cpu.h :

#pragma once

#include <stdint.h>


class CPU
{
private:
    /* data */
    // Registers
    uint8_t accumulator = 0b00000000;
    uint8_t flags_reg = 0b00000000;
    uint8_t b_register = 0b00000000;
    uint8_t c_register = 0b00000000;
    uint8_t e_register = 0b00000000;
    uint8_t h_register = 0b00000000;
    uint8_t l_register = 0b00000000;

    uint16_t sp_register = 0b0000000000000000;
    uint16_t pc_register = 0b0000000000000000;
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
