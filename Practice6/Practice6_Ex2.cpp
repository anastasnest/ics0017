#include <iostream>
#include <string>
using namespace std;

class Greeting {
public:
    void greet(string name) {
        cout <<"Hello " << name << endl;
    }
};

class Local_Greeting: public Greeting {
public:
    void greet(string name) {
        cout <<"Namaste " << name << endl;
    }
};

int main() {
    string name;
    getline(cin,name);
    Greeting greeting1;
    greeting1.greet(name);
    Local_Greeting local_Greeting1;
    local_Greeting1.greet(name);
    return 0;
}