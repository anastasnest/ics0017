#include <iostream>
using namespace std;

class Rectangle {
public:
    static int length;
    int breadth;
    int calculate_area() {
        return length * breadth;
    }
};

int Rectangle::length;

int main() {
    Rectangle rectangle;
    cin >> Rectangle::length >> rectangle.breadth;
    int area = rectangle.calculate_area();
    cout << area << endl;
    return 0;
}