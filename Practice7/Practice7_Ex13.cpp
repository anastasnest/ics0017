#include <iostream>
using namespace std;

enum meat {
    Chicken,
    Beef,
    Pork,
    Lamb
} meat1;

int main() {
    meat meat2;
    meat1 = Beef;
    meat2 = Pork;
    cout << meat1 << endl << meat2;
    return 0;
}