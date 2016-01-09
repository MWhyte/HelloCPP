#include <iostream>

using namespace std;

// returning nothing
void printName(string name){
    cout << name << endl;
}

// returning a value of type int
int volumeOfRectanglePrism(int length, int width, int depth){
    return length * width * depth;
}

int main() {

    printName("Michael");

    cout << volumeOfRectanglePrism(10, 2, 3) << endl;

    return 0;
}