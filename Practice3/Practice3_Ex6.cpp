#include <iostream>
using namespace std;

class Student {
public:
    double papers[3] = {0.0, 0.0, 0.0};
    double total_marks = 0.0;
    double average_marks = 0.0;

    void check_pass_fail() {
        for (double num : papers) {
            total_marks += num;
        }
        average_marks = total_marks / 3.0;
        if (average_marks >= 40.0) {
            cout << "pass" << endl;
        } else {
            cout << "fail" << endl;
        }
    }
};

int main() {
    Student student;
    for (double& num : student.papers) {
        cin >> num;
    }
    student.check_pass_fail();
    return 0;
}