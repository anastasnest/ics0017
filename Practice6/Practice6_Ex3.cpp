#include<iostream>
using namespace std;

class Area {
public:
    void compute_area(int length, int breadth) {
        int area = length * breadth;
        cout << area << endl ;
    }

    void compute_area(int length) {
        int area = length * length;
        cout << area << endl ;
    }
};
int main() {
    Area area1;
    int rect_length, rect_breadth, square_length;
    cin >> rect_length >> rect_breadth >> square_length;
    area1.compute_area(rect_length, rect_breadth);
    area1.compute_area(square_length);
    return 0;
}