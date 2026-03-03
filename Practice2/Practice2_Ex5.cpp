#include <iostream>
using namespace std;

int main() {
    double numbers[5] = {32.2, 43.5, 51.6, 11.3, 29.8};
    double sum = 0.0;

    for (double number: numbers) {
        sum += number;
    }

    double average = sum / 5.0;
    cout << average;
    return 0;
}