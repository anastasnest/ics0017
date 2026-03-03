#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {64, 55, 75, 80, 65};
    int* pt = numbers;
    int smallest = *pt;
    for (int i = 0; i < 5; i++) {
        int current = *(pt + i);
        if (current < smallest) {
            smallest = current;
        }
    }
    cout << smallest;
    return 0;
}