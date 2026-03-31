#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Discount {
protected:
    double discount;
public:
    virtual double apply_discount(double price) = 0;
};

class Percentage: public Discount {
public:
    Percentage(double new_discount) {
        discount = new_discount;
    }
    double apply_discount(double price) override {
        double final_price = price * (1 - discount/100);
        return final_price;
    }
};

class Fixed: public Discount {
public:
    Fixed(double new_discount) {
        discount = new_discount;
    }
    double apply_discount(double price) override {
        return price - discount;
    }
};

class NoDiscount : public Discount {
public:
    double apply_discount(double price) override {
        return price;
    }
};

void error_message() {
    cout << "Error" << endl;
}

Discount* get_discount_type(string rule) {
    char type = rule[0];

    string numberPart = rule.substr(1);
    double value = 0.0;
    bool notEmpty;

    if (numberPart.empty()) {
        notEmpty = false;
    } else {
        try {
            value = stod(numberPart);
        } catch (const invalid_argument&) {
            return nullptr;
        }
        notEmpty = true;
    }

    switch (type) {
        case 'P':
            if (notEmpty) {
                return new Percentage(value);
            }
            break;
        case 'F':
            if (notEmpty) {
                return new Fixed(value);
            }
            break;
        case 'N':
            if (!notEmpty) {
                return new NoDiscount();
            }
            break;
        default:
            break;
    }
    return nullptr;
}

int main() {
    double price;
    string rule;
    cin >> price >> rule;

    Discount* pt = get_discount_type(rule);
    if (!pt) {
        error_message();
        return 0;
    }

    double finalPrice = pt->apply_discount(price);

    if (finalPrice < 0 ) {
        finalPrice = 0.0;
    }

    cout << fixed << setprecision(2);
    cout << "Final Price = " << finalPrice << endl;

    return 0;
}