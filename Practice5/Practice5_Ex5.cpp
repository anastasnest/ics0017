#include <iostream>
using namespace std;
class Triangle {
public:
    int base;
    int height;
    double calculate_area() {
        double area = base * height / 2;
        return area;
    }
};
int main() {
    Triangle triangle1;
    Triangle* pt = &triangle1;
    cin >> pt->base >> pt->height;
    double area = triangle1.calculate_area();
    cout << area << endl;
    return 0;
}