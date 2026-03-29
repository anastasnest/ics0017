#include <iostream>
using namespace std;

class Person {
public:
    void speak() {
        cout << "I am a person." << endl;
    }
};

class Student: public  Person {
public:
    void speak() {
        Person::speak();
        cout << "I am a student." << endl;
    }
};

int main() {
    Student student1;
    student1.speak();
    return 0;
}