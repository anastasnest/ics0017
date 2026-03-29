#include <iostream>
using namespace std;

class Animal {
public:
    void display() {
        cout << "I am an animal" << endl;
    }
};

class Dog: public Animal {
public:
    void display() {
        Animal::display();
        cout << "I am a dog" << endl;
    }
};

int main () {
    Dog dog1;
    dog1.display();
    return 0;
}