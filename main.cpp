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
    double averageScore = (metascore + tomatometer) / 2;
    cout << "Average score is " << averageScore << endl;

    // watch out for int calc
    double unroundedAverageScore = (double)(metascore + tomatometer) / 2;
    cout << "Average score is " << unroundedAverageScore << endl;

    // watch out for int calc
    double unroundedAverageScore2 = (metascore + tomatometer) / 2.0;
    cout << "Average score is " << unroundedAverageScore2 << endl;


    return 0;
}