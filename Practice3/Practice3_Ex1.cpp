#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

int main () {
    Student student;
    cout << "Enter student's marks: ";
    cin >> student.marks;
    cout << student.marks;
    return 0;
}