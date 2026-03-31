#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum method_types {
    Standard,
    Express,
    Invalid
};

void say_error() {
    cout << "Error";
}

method_types get_method(string method) {
    if (method == "Standard") {
        return Standard;
    }
    if (method == "Express") {
        return Express;
    }
    return Invalid;
}

double get_shipping_cost(double weight, method_types method, char zone) {
    double error = -1.0;
    double base, rate;

    if (weight <= 0) {
        return error;
    }

    switch (method) {
        case Standard:
            base = 5.00;
            switch (zone) {
                case 'A':
                    rate = 1.20;
                    break;
                case 'B':
                    rate = 1.50;
                    break;
                case 'C':
                    rate = 2.00;
                    break;
                default:
                    return error;
            }
            break;
        case Express:
            base =  10.00;
            switch (zone) {
                case 'A':
                    rate = 2.00;
                    break;
                case 'B':
                    rate = 2.50;
                    break;
                case 'C':
                    rate = 3.50;
                    break;
                default:
                    return error;
            }
            break;
        default:
            return error;
    }

    return base + rate * weight;
}

int main() {
    double weight;
    string method;
    char zone;
    cin >> weight >> method >> zone;

    method_types method_type = get_method(method);

    if (method_type == Invalid) {
        say_error();
        return 0;
    }

    double cost = get_shipping_cost(weight, method_type, zone);

    if (cost < 0) {
        say_error();
        return 0;
    }

    cout << fixed << setprecision(2);
    cout << "Cost=" << cost;
    return 0;
}