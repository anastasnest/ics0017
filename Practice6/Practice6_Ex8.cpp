#include <iostream>
using namespace std;

class Polygon {
public:
    virtual double calculate_area() = 0;
};

class Triangle: public Polygon {
public:
    double base, height;
    Triangle(double b, double h): base(b), height(h) {}
    double calculate_area() override {
        return base * height / 2;
    }
};

class Rectangle: public Polygon {
public:
    double length, breadth;
    Rectangle(double l, double b): length(l), breadth(b) {}
    double calculate_area() override {
        return length * breadth;
    }
};

int main() {
    double base, height, length, breadth;
    cin >> base >> height >> length >> breadth;
    Triangle tri(base, height);
    Rectangle rect(length, breadth);
    double area_triangle = tri.calculate_area();
    double area_rectangle = rect.calculate_area();
    cout << area_triangle << endl << area_rectangle;
    return 0;
}