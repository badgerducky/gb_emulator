// main.cpp : Defines the entry point for the application.

#include "cartridge_reader.cpp"
#include "cpu.cpp"
#include <iostream>
#include <filesystem>
using std::cout;
using std::endl;
using std::filesystem::current_path;

int main()
{
	// Get current directory
	cout << "Current Directory: " << current_path() << endl
		 << endl;

	int64_t rom_size = 0; // store size of rom, after getting passed to load_rom function
	rom_size = get_file_size_bytes("gb_emulator/tests/input.bin");

	unsigned char *rom = new unsigned char[rom_size]; // store contents of rom after load_rom function
	load_rom("gb_emulator/tests/input.bin", &rom_size, rom);

	cout << "rom size: " << rom_size << endl;

	for (int64_t i = 0; i < rom_size; i++)
	{
		// printf("%u ", rom[i]);
		cout << "byte number " << i << ": " << rom[i] << endl;
	}

	get_instruction(rom, 1);
	return 0;
}
