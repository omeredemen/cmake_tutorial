#include <iostream>
#include "configure_file.h"

int main(int argc, char *argv[]){
    // std::cout << "version: " << code_generation_BINARY_DIRECTORY << std::endl;
    std::cout << argv[0] << " Version: " << code_generation_VERSION_MAJOR << "."
    << code_generation_VERSION_MINOR  << std::endl;
    std::cout << "Project binary directory: " << code_generation_BINARY_DIRECTORY << std::endl;
    std::cout << "Project source directory: " << code_generation_SOURCE_DIRECTORY << std::endl;
    return 0;
}