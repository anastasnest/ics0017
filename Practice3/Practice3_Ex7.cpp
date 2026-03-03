#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    string name = "Dr.Curtis Connors";
};

class Student {
public:
    string name = "Peter Parker";
};

void display_names() {
    Teacher teacher;
    Student student;
    cout << teacher.name << endl;
    cout << student.name << endl;
}

int main() {
    display_names();
    return 0;
}