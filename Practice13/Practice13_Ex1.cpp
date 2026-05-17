#include <iostream>
#include <fstream>
using namespace std;

class FileOpenError : public exception {
public:
    const char* what() const noexcept override {
        return "Unable to open the file.";
    }
};

int main() {
    ifstream file ("numbers.txt");
    try {
        if (!file.is_open()||file.fail()) {
            throw FileOpenError();
        }

        int sum = 0;
        int currentNumber;
        while (file >> currentNumber) {
            sum += currentNumber;
        }

        cout << "Sum of the numbers: " << sum << endl;

    } catch (const FileOpenError& e) {
        cout << e.what() << endl;
    }

    return 0;
}