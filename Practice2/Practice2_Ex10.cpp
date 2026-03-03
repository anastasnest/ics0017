#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int age;
    string name;
};

int main () {
    struct Employee employee1;

    string name1;
    cout << "Enter employee's name: ";
    getline(cin,name1);
    employee1.name = name1;

    cout << "Enter employee's age: ";
    cin >> employee1.age;

    cout << employee1.name << endl;
    cout << employee1.age;

    return 0;
}