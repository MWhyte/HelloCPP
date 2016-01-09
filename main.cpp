#include <iostream>
#include <stdexcept>

using namespace std;

int toysPerKids(int toys, int kids){
    if (kids == 0)
        throw std::overflow_error("Divide by zero exception");

    return toys / kids;
}

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