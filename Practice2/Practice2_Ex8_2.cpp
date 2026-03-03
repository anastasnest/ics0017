#include <iostream>
#include <string>
using namespace std;

int main () {
    string text1 = "Elden";
    string text2 = "Ring";
    string game = text1 + " " + text2;
    for (int i = 0; i < game.length(); i++) {
        cout << game[i];
    }
    return 0;
}