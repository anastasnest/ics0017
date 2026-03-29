#include <iostream>
using namespace std;

class Triangle {
public:
    double base, height;
    Triangle(double base, double height): base(base), height(height) {}
    friend class Area;
};

class Rectangle {
public:
    double length, breadth;
    Rectangle(double length, double breadth): length(length), breadth(breadth) {}
    friend class Area;
};

class Area {
public:
    double get_triangle_area(Triangle triangle) {
        return triangle.base * triangle.height / 2;
    }

    double get_rectangle_area(Rectangle rectangle) {
        return rectangle.length * rectangle.breadth;
    }
};

int main() {
    double base, height, length, breadth;
    cin >> base >> height >> length >> breadth;
    Triangle triangle(base, height);
    Rectangle rectangle(length, breadth);
    Area area;
    double area_triangle = area.get_triangle_area(triangle);
    double area_rectangle = area.get_rectangle_area(rectangle);
    cout << area_triangle << endl << area_rectangle;
    return 0;
}