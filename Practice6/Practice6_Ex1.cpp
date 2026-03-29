#include <iostream>
using namespace std;

class Animal {
public:
    virtual void make_sound() = 0;
};

class Dog: public Animal {
public:
    void make_sound() override {
        cout<<"Woof Woof"<<endl;
    }
};

int main() {
    Dog dog1;
    dog1.make_sound();
    return 0;
}