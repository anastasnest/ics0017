#include <iostream>
#include <string>
using namespace std;

int main () {
    string text1, text2;

    getline (cin, text1);
    getline (cin, text2);

    if (text1.length() > text2.length()) {
        cout << text1;
    } else {
        cout << text2;
    }
    return 0;
}