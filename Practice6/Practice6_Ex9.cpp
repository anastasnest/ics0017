#include <complex>
#include <iostream>
using namespace std;

class Complex_Number {
public:
    double real, imag;
    Complex_Number(double r, double i) {
        real = r;
        imag = i;
    }
    friend Complex_Number add_complex(Complex_Number num1, Complex_Number num2);
};

Complex_Number add_complex(Complex_Number obj1, Complex_Number obj2) {
    double real = obj1.real + obj2.real;
    double imag = obj1.imag + obj2.imag;
    Complex_Number result(real, imag);
    return result;
}

int main() {
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    Complex_Number c1(n1, n2);
    Complex_Number c2(n3, n4);
    Complex_Number result(0.0, 0.0);
    result = add_complex(c1, c2);
    cout << result.real << " + " << result.imag << "i";
    return 0;
}