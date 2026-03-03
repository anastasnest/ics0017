#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "C++ Programming";

    for (int i = 0; i < text.length(); i++) {
        cout << text[i];
    }
    return 0;
}