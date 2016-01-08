#include <iostream>
#include <string>

using namespace std;

int main() {

    double x = 5.25;
    int y;
    y = x;      // casting down to a smaller datatype is allowed
    cout << y << endl;  // value is truncated

    // explicit casting
    y = (int)x;
    cout << y << endl;

    x = y /10;
    cout << x << endl; // ??  5/10 should be 0.5. but this is integer division

    x = (double) y / 10; // casting required if dividing by an int. Now doing floating point division
    cout << x << endl;

    x = y / 10.0; // or divide by a double
    cout << x << endl;

    return 0;
}