#include <iostream>
using namespace std;
int main() {
    constexpr double kmToMiles = 0.621;
    double distance;
    cout << "Enter the distance in kilometers: ";
    cin >> distance;
    cout << distance << " kilometers are equal to " << distance * kmToMiles << " miles.";
    return 0;
}