#include <iostream>
using namespace std;

class Polygon {
public:
    void display() {
        cout << "A Polygon is created" << endl;
    }
};

class Rectangle: public Polygon {};

class Triangle: public Polygon {};

int main() {
    Rectangle rect;
    rect.display();
    Triangle tri;
    tri.display();
    return 0;
}