#include <iostream>
#include <exception>
using namespace std;

int main () {

    double numerator, denominator;

    try {
        cin >> numerator >> denominator;
        if (denominator == 0.0) {
            throw exception();
        }
        double result = numerator / denominator;
        cout << result;
    }
    catch(exception e) {
        cout << "Error! Denominator cannot be 0." << endl;
        cout << e.what();
    }
    return 0;
}