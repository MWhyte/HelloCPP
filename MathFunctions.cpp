#include <iostream>

using namespace std;

int toysPerKids(int toys, int kids){
    if (kids == 0)
        throw std::overflow_error("Divide by zero exception");

    return toys / kids;
}
