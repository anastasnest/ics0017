#include <iostream>
using namespace std;

class Vehicle {
public:
    void display_info() {
        cout << "Four Wheeler or Two Wheeler" << endl;
    }
};

class Car: public Vehicle {
public:
    void display_info() {
        cout << "Cars are Four Wheeler" << endl;
    }
};

int main () {
    Car car;
    car.display_info();
    return 0;
}