#include <iostream>
using namespace std;

class Student {
public:
    double marks;
    Student(double m): marks(m) {}
};

double calculate_average(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) / 2;
    return average;
}

int main() {
    double marks1, marks2;
    cin >> marks1 >> marks2;
    Student s1(marks1);
    Student s2(marks2);
    double average = calculate_average(s1, s2);
    cout << average << endl;
    return 0;
}