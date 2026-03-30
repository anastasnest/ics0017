#include <iostream>
using namespace std;

enum seasons {
    spring,
    summer = -2,
    autumn,
    winter
} season1;

int main() {
    season1 = spring;
    cout << season1 << endl;
    season1 = summer;
    cout << season1 << endl;
    season1 = autumn;
    cout << season1 << endl;
    season1 = winter;
    cout << season1 << endl;
    return 0;
}