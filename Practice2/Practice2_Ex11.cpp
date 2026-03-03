#include <iostream>
using namespace std;

int main () {
    double number = 83.13;
    double* pt = &number;
    cout << pt;
    return 0;
}