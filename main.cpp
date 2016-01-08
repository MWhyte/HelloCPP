#include <iostream>
#include <string>

using namespace std;

int main() {

    // Get the name of the movie
    string movie = "";
    cout << "What is the name of the movie:" << endl;
    getline(cin, movie);


    // Get Metascore
    int metascore = 0;
    cout << "What is the metascore rating for " << movie << "?" << endl;
    cin >> metascore;

    // Get Tomatometer score
    int tomatometer = 0;
    cout << "What is the Tomatometer rating for " << movie << "?" << endl;
    cin >> tomatometer;



    // calculate average
    int averageScore = (metascore + tomatometer) / 2;

    cout << "Average score is " << averageScore << endl;

    return 0;
}