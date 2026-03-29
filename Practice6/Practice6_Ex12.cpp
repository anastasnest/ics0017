#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double breadth;
    Rectangle(): length(6.9), breadth(4.2) {}
    Rectangle(double l, double b): length(l), breadth(b) {}
    double get_area() {
        return length * breadth;
    }
};

int main() {
    double length, breadth;
    cin >> length >> breadth;
    Rectangle rect1(length, breadth);
    cout << rect1.get_area() << endl;
    Rectangle rect2;
    cout << rect2.get_area() << endl;
    return 0;
}