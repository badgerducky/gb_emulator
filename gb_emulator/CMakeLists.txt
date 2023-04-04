# CMakeList.txt : CMake project for gb_emulator, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (gb_emulator "cpu.cpp" "cpu.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET gb_emulator PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
