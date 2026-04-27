#include <iostream>
using namespace std;

int main() {
    int number = 666;
    char alphabet = 'd';

    void* ptr = &number;

    cout << *(int*)ptr << endl;

    ptr = &alphabet;

    cout << *(char*)ptr << endl;

    return 0;
}