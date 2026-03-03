#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person(string new_name) {
        name = new_name;
    }
};

int main() {
    Person person1("Michael Douglas");
    cout << person1.name << endl;
    return 0;
}