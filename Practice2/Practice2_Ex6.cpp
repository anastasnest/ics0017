#include <iostream>
using namespace std;

int find_smallest(int numbers_to_check[], int size) {
    int smallest = numbers_to_check[0];
    for (int i = 0; i < size; i++) {
        if (numbers_to_check[i] < smallest) {
            smallest = numbers_to_check[i];
        }
    }
    return smallest;
}

int main() {
    int numbers[5] = {55, 64, 45, 80, 65};

    int smallest = find_smallest(numbers, 5);
    cout << smallest;

    return 0;
}