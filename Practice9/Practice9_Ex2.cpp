#include <iostream>
using namespace std;

class Circle {
protected:
    double radius;
    double pi = 3.14;
    friend double find_circumference(Circle c);
public:
    Circle(double rad): radius(rad) {};
};

double find_circumference(Circle circle) {
    return 2 * circle.pi * circle.radius;
}

int main() {
    double radius;
    cin >> radius;
    Circle circle(radius);
    cout << find_circumference(circle);
    return 0;
}