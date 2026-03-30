#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    int marks;
public:
    string name;
};

class Student: protected Person {
public:
    void set_name(string new_name) {
        name = new_name;
    }

    string get_name() {
        return name;
    }

    void set_marks(int new_marks) {
        marks = new_marks;
    }

    int get_marks() {
        return marks;
    }
};

int main() {
    Student student;
    student.set_name("Tom Araya");
    student.set_marks(97);
    cout << student.get_name() << endl;
    cout << student.get_marks() << endl;
    return 0;
}