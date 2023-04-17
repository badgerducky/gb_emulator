// main.cpp : Defines the entry point for the application.

#include "cartridge_reader.cpp"
#include "cpu.cpp"
#include <iostream>
#include <windows.h>
using std::cout;
using std::endl;



int main()
{
	//Get current directory on Windows
	char buf[256];
	GetCurrentDirectory(256, buf);
	cout << buf << endl;

	int64_t rom_size = 0; // store size of rom, after getting passed to load_rom function

	get_file_size_bytes("..\\..\\gb_emulator\\gb_emulator\\tests\\input.bin");
	unsigned char * rom = load_rom("..\\..\\gb_emulator\\gb_emulator\\tests\\input.bin", &rom_size);

	cout << "rom file: " << rom << endl;
	cout << "rom size: " << rom_size << endl;

	get_first_byte(rom, rom_size);
	return 0;
}
