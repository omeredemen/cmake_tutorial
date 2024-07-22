#include <iostream>
#include <vector>

#include "sum.hpp"

void add(const std::vector<int> numbers, int &result) {
    for (auto &&i : numbers)
    {
        result += i;
    }
}