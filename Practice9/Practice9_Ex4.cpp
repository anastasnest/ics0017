#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void greet() {
        cout << "Hello, " << name << ". Your age is " << age << "." << endl;
    }
};

int main () {
    string name;
    int age;

    getline(cin,name);
    cin >> age;

    Person p = Person(name, age);
    p.greet();

    return 0;
}