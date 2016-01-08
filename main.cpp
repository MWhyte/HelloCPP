#include <iostream>


using namespace std;


int num = 34;               // 4 bytes allocated
string name = "John";       // variable size
double price = 12.1;        // 8 bytes allocated
char character = 'C';       // 1 bytes allocated
bool trueOrFalse = true;    // 1 bytes allocated

int main() {
    cout << num << endl;
    cout << name << endl;
    cout << price << endl;
    cout << character << endl;
    cout << trueOrFalse << endl;
    return 0;
}