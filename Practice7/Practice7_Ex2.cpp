#include <iostream>
using namespace std;

class Company {
public:
    static string name;
    static void print_name() {
        cout << name << endl;
    };
};

string Company::name;

int main() {
    getline(cin, Company::name);
    Company::print_name();
    return 0;
}