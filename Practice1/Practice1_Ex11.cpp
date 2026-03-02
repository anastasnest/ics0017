#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    while (true) {
        int number;
        cout << "Enter 0 to end the program. Enter a number to calculate a sum of positive numbers: ";
        cin >> number;
        if (number == 0) {
            cout << "The sum of all entered positive numbers is " << sum << "." << endl;
            break;
        }
        if (number < 0) {
            continue;
        }
        sum += number;
    }
    return 0;
}