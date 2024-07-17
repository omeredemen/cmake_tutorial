#include <iostream>
#include <cmath>

#include "operations.hpp"


namespace operations {

int add(int a, int b) {
    return a + b;
}

double mysqrt(double x)
{
    if (x <= 0) {
        return 0;
    }

#ifdef USE_MYMATH
    double result = x;

    // do ten iterations
    for (int i = 0; i < 10; ++i) {
        if (result <= 0) {
        result = 0.1;
        }
        double delta = x - (result * result);
        result = result + 0.5 * delta / result;
        std::cout << "Computing sqrt of " << x << " to be " << result << std::endl;
    }
    return result;
#else
    std::cout << "it is not my sqrt function " << std::endl;
    double result = sqrt(x);
    return result;

#endif
}

}