// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

// TODO 5: Include MathFunctions.h
#include "MathFunctions.h"
#include "configure_file.h"

int main(int argc, char* argv[])
{
    if(argc < 2) {
        std::cout << argv[0] << " version: " << hello_VERSION_MAJOR << "."
        << hello_VERSION_MINOR << " and project binary directory: " << hello_BINARY_DIRECTORY << std::endl;

        return 0;
    }

    // convert input to double
    const double inputValue = std::stod(argv[1]);

    // TODO 6: Replace sqrt with mathfunctions::sqrt

    // calculate square root
    // const double outputValue = sqrt(inputValue);
    const double outputValue = mathfunctions::sqrt(inputValue);

    std::cout << "The square root of " << inputValue << " is " << outputValue
                << std::endl;
    return 0;
}