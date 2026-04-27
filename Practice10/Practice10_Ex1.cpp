#include <iostream>
using namespace std;

int main() {
    try {
        int marks;
        cin >> marks;

        if (marks < 0 || marks > 100) {
            throw -1;
        }
        cout << marks;
    }
    catch (int num) {
        cout << "Marks can neither be negative nor greater than 100";
    }
    return 0;
}