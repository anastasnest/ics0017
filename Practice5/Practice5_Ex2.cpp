#include <iostream>
using namespace std;

class Polygon {
public:
    int total_sides;
    void display_info() {
        cout << "A polygon is a two dimensional shape with straight lines." << endl;
    }
    int get_perimeter(int sides[]) {
        int perimeter = 0;
        for (int i = 0; i < total_sides; i++) {
            perimeter += sides[i];
        }
        return perimeter;
    }
};

class Quadrilateral: public Polygon {
public:
    Quadrilateral() {
        total_sides = 4;
    };
    void display_info() {
        cout << "A quadrilateral is a polygon with 4 sides." << endl;
    }
};

int main () {
    Quadrilateral q1;
    int sides[4];
    for (int i = 0; i < 4; i++) {
        cin >> sides[i];
    }
    int perimeter = q1.get_perimeter(sides);
    cout << perimeter << endl;
    q1.display_info();
    return 0;
}