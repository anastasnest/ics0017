#include <iostream>
using namespace std;

class Person {
public:
    virtual void activity() {
        cout << "Human Activity" << endl;
    }
};

class Programmer: public Person {
public:
    void activity() {
        cout << "Coding" << endl;
    }
};

int main() {
    Programmer prog;
    Person* person = &prog;
    person->activity();
    return 0;
}