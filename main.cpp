#include <iostream>

using namespace std;

int main() {

    // relational operators
    cout << (10 > 6) << endl;
    cout << (10 < 6) << endl;
    cout << (10 <= 10) << endl;
    cout << (10 >= 10) << endl;

    cout << (10 == 10) << endl;
    cout << (10 != 10) << endl;

    string a = "Hi";
    string b = "hi";
    string c = "hi";

    cout << (a == b) << endl;
    cout << (b == b) << endl;
    cout << (b == c) << endl;

    cout << ('C' < 'A') << endl;
    cout << ('C' > 'A') << endl;

    // boolean operators
    // and
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    // or
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    // xor
    cout << (true ^ true) << endl;
    cout << (true ^ false) << endl;
    cout << (false ^ true) << endl;
    cout << (false ^ false) << endl;

    // not
    cout << (!false) << endl;
    cout << (!true) << endl;

    return 0;
}