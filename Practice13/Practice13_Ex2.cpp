#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileOpenError : public exception {
public:
    const char* what() const noexcept override {
        return "Unable to open the file.";
    }
};

int main() {
    ifstream file ("text.txt");
    try {
        if (!file.is_open()||file.fail()) {
            throw FileOpenError();
        }

        string line;
        while (getline(file,line)) {
            cout << line << endl;
        }

    } catch (const FileOpenError& e) {
        cout << e.what() << endl;
    }

    return 0;
}