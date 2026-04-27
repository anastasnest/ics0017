#include <iostream>
using namespace std;

class InvalidInputException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid input after 3 attempts.";
    }
};

int getValidInteger() {
    int value;
    int attempts = 0;
    while (true) {
        std::cout << "Enter an integer: ";
        std::cin >> value;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            attempts++;
            if (attempts >= 3) {
                throw InvalidInputException();
            }
            std::cout << "Try again.\n";
        } else {
            return value;
        }
    }
}

int main() {
    int result = getValidInteger();
    cout << result;
    return 0;
}