#include <iostream>

using namespace std;

int main() {

    int x = 10;
    int y = 20;


    // if
    if (x == 10){
        cout << "X equals ten" << endl;
    }

    // if else
    if (x == 10){
        cout << "X equals ten" << endl;
    } else {
        cout << "X does not equal ten" << endl;
    }


    // nested if
    if (x == 10){
        if (y == 20){
            cout << "X equals ten and y equals 20" << endl;
        } else {
            cout << "X equals ten and y does not equal 20" << endl;
        }
    } else {
        if (y == 20){
            cout << "X does not equal ten and y equals 20" << endl;
        } else {
            cout << "X does not equal ten and y doesn not equal 20" << endl;
        }
    }


    // operators and no brackets
    if (x==10 && y==20)
        cout << "X equals ten and y equals 20" << endl;


    if (x==10 || y==20)
        cout << "X equals ten OR y equals 20" << endl;



    // switch statement
    char grade = 'D';

    switch(grade)
    {
        case 'A' :
            cout << "Excellent!" << endl;
            break;
        case 'B' :
        case 'C' :
            cout << "Well done" << endl;
            break;
        case 'D' :
            cout << "You passed" << endl;
            break;
        case 'F' :
            cout << "Better try again" << endl;
            break;
        default :
            cout << "Invalid grade" << endl;
    }
    cout << "Your grade is " << grade << endl;

    return 0;




    return 0;
}