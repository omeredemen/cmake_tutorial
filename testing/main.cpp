#include <iostream>
#include <vector>

#include "sum.hpp"


int main(int argc, char *argv[]) {
    std::vector<int> numbers;
    int result = 0;

    for(int i = 1; i < argc; i++){
        numbers.push_back(atoi(argv[i]));
    }

    add(numbers, result);
    std::cout << result << std::endl;
    return 0;
}