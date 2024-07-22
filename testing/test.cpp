#include "sum.hpp"

#include <vector>

int main() {
    auto integers = {1, 2, 3, 4, 5};
    int result = 0;
    add(integers, result);

    if (result == 15) {
        return 0;
    } else {
        return 1;
    }
}