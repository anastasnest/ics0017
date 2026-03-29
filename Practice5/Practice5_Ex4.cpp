#include <iostream>
using namespace std;

class Person {
public:
    void display_info() {
        cout<<"I am a person."<<endl;
    }
};

class Student: public Person {
public:
    void display_info() {
        cout<<"I am a student."<<endl;
    }
};

class Employee: public Person {
public:
    void display_info() {
        cout<<"I am an employee."<<endl;
    }
};

int main() {
    Student student1;
    Employee employee1;
    student1.display_info();
    employee1.display_info();
    return 0;
}