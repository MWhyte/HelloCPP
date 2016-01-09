#include <iostream>

using namespace std;

int main() {

    int x = 0;

    // while loop
    while (x < 2){
        cout << x << endl;
        x++;
    }

    // do while
    x = 0;

    do{
        cout << x << endl;
        x++;
    } while (x < 2);                // executes once before evaluating this expression


    // for loop
    for (int i = 0; i < 10; i++){
        cout << i << endl;
    }

    return 0;
}