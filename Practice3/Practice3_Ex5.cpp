#include <iostream>
using namespace std;

class Triangle {
public:
    int base;
    int height;
    Triangle(int new_base, int new_height) {
        base = new_base;
        height = new_height;
    }
    double calculate_area() {
        double area = base * height / 2;
        return area;
    }
};

int main() {
    int base, height;
    cin >> base >> height;

    Triangle triangle(base, height);
    double area = triangle.calculate_area();
    cout << area << endl;
    return 0;
}