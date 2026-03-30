#include<iostream>
#include<string>
using namespace std;

class Person {
private:
    int id;
protected:
    int marks;
public:
    string name;
    void set_id(int new_id) {
        id = new_id;
    }

    int get_id() {
        return id;
    }

    void set_marks(int new_marks) {
        marks = new_marks;
    }

    int get_marks() {
        return marks;
    }
};

class Student: public Person {};

int main() {
    Student student;
    student.name = "Tom Araya";
    student.set_id(101);
    student.set_marks(97);
    cout << student.name << endl;
    cout << student.get_id() << endl;
    cout << student.get_marks() << endl;
    return 0;
}