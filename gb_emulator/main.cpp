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
	cout << "Current Directory: " << buf << endl << endl;

	int64_t rom_size = 0; // store size of rom, after getting passed to load_rom function
	unsigned char * rom = NULL; //store contents of rom after load_rom function

	get_file_size_bytes("..\\..\\gb_emulator\\gb_emulator\\tests\\input.bin");
	load_rom("..\\..\\gb_emulator\\gb_emulator\\tests\\input.bin", &rom_size, rom);

	cout << "rom size: " << rom_size << endl;

	for (int64_t i=0; i < rom_size; i++){
		//printf("%u ", rom[i]);
		cout << "byte number " << i << ": " << rom[i] << endl;
	}

	get_instruction(rom, 1);
	return 0;
}
