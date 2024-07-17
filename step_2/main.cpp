#include <iostream>

#include "operations.hpp"


int main(int argc, char *argv[]){

    int a = 10;
    int b = 20;

    int sum = operations::add(a, b);
    double sqr = operations::mysqrt(a);

    std::cout << "sum of " << a << " and " << b << " is: " << sum << std::endl;
    std::cout << "square of " << a << " is: " << sqr << std::endl; 
    return 0;
}