#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter the number you want to get a multiplication table of: ";
    cin >> number;
    for (int i = 1; i <= 5; i++) {
        cout << number << " * " << i << " = " << number * i << endl;
    }
    return 0;
}