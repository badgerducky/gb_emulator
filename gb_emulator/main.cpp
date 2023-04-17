// main.cpp : Defines the entry point for the application.

#include "cartridge_reader.cpp"
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

	get_file_size_bytes("..\\..\\gb_emulator\\gb_emulator\\tests\\input.bin");
	load_rom("..\\..\\gb_emulator\\gb_emulator\\tests\\input.bin");
	return 0;
}
