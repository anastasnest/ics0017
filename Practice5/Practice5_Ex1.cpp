#include <iostream>
using namespace std;

class Vehicle {
public:
    void get_features() {
        cout << "Initializing vehicle features" << endl;
    }
};

class Car: public Vehicle {};

int main() {
    Car c;
    c.get_features();
    return 0;
}