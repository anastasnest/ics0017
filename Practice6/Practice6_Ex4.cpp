#include <iostream>
using namespace std;

class Add {
public:
    int add_number(int num) {
        return num + 7;
    }

    char add_number(char alpha) {
        return alpha + 7;
    }
};

int main() {
    Add add1;
    int number;
    char alpha;
    cin >> number >> alpha;
    int result1 = add1.add_number(number);
    char result2 = add1.add_number(alpha);
    cout << result1 << endl;
    cout << result2 << endl;
    return 0;
}