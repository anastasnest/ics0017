#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Discount {
public:

    virtual double apply_discount(double price) = 0;
};

class Percentage: public Discount {
private:
    double discount;
public:
    Percentage(double new_discount) {
        discount = new_discount;
    }
    double apply_discount(double price) {
        double final_price = price * (1 - discount/100);
        return final_price;
    }
};

class Fixed: public Discount {
private:
    double discount;
public:
    Fixed(double new_discount) {
        discount = new_discount;
    }
    double apply_discount (double price) {
        return price - discount;
    }
};

class NoDiscount : public Discount {
public:
    double apply_discount(double price) {
        return price;
    }
};

void error_message() {
    cout << "Error" << endl;
}

template<class T>
T get_discount_type(string rule) {
    char type = rule[0];
    string numberPart = rule.substr(1);
    double value = 0.0;
    bool notEmpty;
    if (numberPart.empty()) {
        error_message();
        notEmpty = false;
    } else {
        value = stod(numberPart);
        notEmpty = true;
    }

    switch (type) {
        case 'P':
            if (notEmpty) {
                return Percentage(value);
            }
            break;
        case 'F':
            if (notEmpty) {
                return Fixed(value);
            }
            break;
        case 'N':
            if (!notEmpty) {
                return NoDiscount();
            }
            break;
        default:
            break;
    }
    return 0;
}

template<class T>
double get_final_price(double price, string rule) {
    T discount = get_discount_type(rule);
    if (discount == 0) {
        error_message();
        return -1.0;
    }
    double final_price = discount.apply_discount(price);
    return final_price;

}

int main() {
    double price;
    string rule;
    cin >> price >> rule;
    double finalPrice = get_final_price(price, rule);
    if (finalPrice >= 0) {
        cout << fixed << setprecision(2);
        cout << finalPrice << endl;
    }
    return 0;
}