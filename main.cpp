#include <iostream>

using namespace std;

int main() {
    string name = "";
    int age = 0;

    cout << "Enter you name:" << endl;
    cin >> name;

    cout << "Enter you age:" << endl;
    cin >> age;


    cout << "Hello " << name << " you are " << age << " years old." << endl;

    return 0;
}