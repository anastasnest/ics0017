#include <iostream>
#include <string>
using namespace std;

int identify_state_rate(string s) {
    if (s == "Pending") return 0;
    if (s == "Paid") return 1;
    if (s == "Shipped") return 2;
    if (s == "Delivered") return 3;
    return -2; // no matter what to compare to, the difference won't be 1
}

int main() {
    string input1, input2, input3;
    cin >> input1 >> input2 >> input3;

    string inputs[3] = {input1, input2, input3};

    int stateRank[3];

    for (int i = 0; i < 3; ++i) {
        stateRank[i] = identify_state_rate(inputs[i]);
    }

    for (int i = 0; i < 2; ++i) {
        if (stateRank[i + 1] - stateRank[i] == 1) {
            cout << "OK:" << inputs[i + 1] << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}