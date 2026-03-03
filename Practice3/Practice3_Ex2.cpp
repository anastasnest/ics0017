#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

int main() {
    Student student1, student2;
    cout << "Enter first student's marks: ";
    cin >> student1.marks;
    cout << "Enter second student's marks: ";
    cin >> student2.marks;
    cout << student1.marks << endl << student2.marks;
    return 0;
}