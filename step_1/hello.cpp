#include <iostream>
#include <string>

#include "configure_file.h"

int main(int argc, char* argv[])
{
    if(argc < 2) {
        std::cout << argv[0] << " version: " << hello_VERSION_MAJOR << "."
        << hello_VERSION_MINOR << " and project binary directory: " << hello_BINARY_DIRECTORY << std::endl;

        return 0;
    }
}