#include <iostream>
using namespace std;

class Rectangle {
public:
    static int length;
    static int breadth;
};

int Rectangle::length;
int Rectangle::breadth;

int main() {
    cin >> Rectangle::length >> Rectangle::breadth;
    int area = Rectangle::length * Rectangle::breadth;
    cout << area << endl;
    return 0;
}