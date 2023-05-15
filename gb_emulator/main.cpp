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
	const char *RELATIVE_PATH = "gb_emulator/tests/input.bin";

	int64_t rom_size = 0;
	rom_size = get_file_size_bytes(RELATIVE_PATH);

	unsigned char *rom = new unsigned char[rom_size];
	load_rom(RELATIVE_PATH, &rom_size, rom);

	cout << "rom size: " << rom_size << endl;

	get_instruction(rom, 1);
	return 0;
}
