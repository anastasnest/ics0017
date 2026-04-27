#include <iostream>
using namespace std;

int main() {
    int numbers[3] = {6, 12, 24};

    int sum = 0;

    void* ptr = &sum;

    for (int i = 0; i < 3; i++) {
        *(int*)ptr += numbers[i];// bad practice - better: *static_cast<int*>(ptr) += numbers[i];
    }

    cout << *(int*)ptr << endl;

    return 0;
}