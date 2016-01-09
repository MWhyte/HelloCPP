#include <iostream>
#include "MathFunctions.h"

using namespace std;

int main() {

    int toys;
    int kids;

    cout << "Enter the number of toys:" << endl;
    cin >> toys;

    cout << "Enter the number of kids:" << endl;
    cin >> kids;

    try {
        int result = toysPerKids(toys, kids);
        cout << "There are " << result << " toys per kid" << endl;
    } catch (std::overflow_error e){
        cout << "Something bad happened: " << e.what();
    }

    return 0;
}