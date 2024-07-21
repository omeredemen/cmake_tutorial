#include <iostream>


int main(){
    #ifdef EX1
        std::cout << "EX1 definition is created by cmake " << EX1 << std::endl;
    #elif EX3
        std::cout << "EX3 definition is created by cmake" << std::endl;
    #elif EX2
        std::cout << "EX2 definition is created by cmake" << std::endl;
    #else
        std::cout << "hello CMake World" << std::endl;
    #endif
    return 0;
}