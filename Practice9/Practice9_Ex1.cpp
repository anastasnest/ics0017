#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;
    Complex(double r, double i): real(r), imag(i) {}
};

Complex substract_complex(Complex c1, Complex c2) {
    Complex result(0, 0);
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;

}

void print_complex(Complex c1) {
    cout << c1.real << " + " << c1.imag << "i" << endl;
}

int main() {
    double r1, r2, i1, i2;
    cin >> r1 >> r2 >> i1 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex difference(0,0);
    difference = substract_complex(c1, c2);
    print_complex(difference);
    return 0;
}