#include <iostream>
#include <exception>

class InvalidInputException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid input after 3 attempts.";
    }
};

class NegativeValueException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Negative value is not allowed.";
    }
};

class TooSmallException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Value is too small. Must be at least 10.";
    }
};

int getValidInteger() {
    int value;
    int attempts = 0;
    while (true) {
        std::cout << "Enter an integer: ";
        std::cin >> value;

        if (std::cin.fail()||std::cin.peek() != '\n') {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            attempts++;
            if (attempts >= 3) {
                throw InvalidInputException();
            }
            std::cout << "Invalid input, only integers are accepted. Please, try again.\n";
        } else {
            return value;
        }
    }
}

void checkNumber(int x) {
    if (x < 0) {
        throw NegativeValueException();
    } else if (x < 10) {
        throw TooSmallException();
    }
}

int main() {
    try {
        int result = getValidInteger();
        checkNumber(result);
        std::cout << "Input was successful. Integer entered: " << result;
    } catch (const InvalidInputException& e) {
        std::cout << "Input error: " << e.what() << std::endl;
    } catch (const NegativeValueException& e) {
        std::cout << "Logic error: " << e.what() << std::endl;
    } catch (const TooSmallException& e) {
        std::cout << "Rule error: " << e.what() << std::endl;
    }
    return 0;
}