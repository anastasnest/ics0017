#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number you want to get a multiplication table of: ";
    cin >> n;
    for (int i = 6; i <= 9; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}