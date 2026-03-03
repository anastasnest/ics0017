#include <iostream>
using namespace std;

int main() {
    int numbers[4] = {43, 78, 23, 45};
    int new_numbers[4];
    for (int i = 0; i < 4; i++) {
        new_numbers[i] = numbers[i] * 10;
    }
    for (int new_number : new_numbers) {
        cout << new_number << endl;
    }
    return 0;
}