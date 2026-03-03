#include<iostream>
using namespace std;

void add_numbers(double n1, double n2) {
    cout << n1 + n2;
}

int main() {
    double number1, number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    add_numbers(number1, number2);
    return 0;
}