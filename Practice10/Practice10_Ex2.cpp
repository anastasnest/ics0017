#include <iostream>
using namespace std;

int main () {
    int numbers[] = {3, 4, 5};
    int array_length = sizeof(numbers)/sizeof(numbers[0]);

    int index;

    try {
        cin >> index;
        if (index < 0 || index >= array_length) {
            throw "Array is out of bounds!";
        }
        cout << numbers[index];
    }
    catch (const char* msg) {
        cout << msg;
    }

    return 0;
}