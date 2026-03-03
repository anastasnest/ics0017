#include <iostream>
using namespace std;

int main() {
    double numbers[5];
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    double sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        sum += numbers[i];
    }
    cout << sum / 5.0;
    return 0;
}