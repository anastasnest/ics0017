#include <iostream>
using namespace std;

class Account {
protected:
    string account_id;
    string password;

public:
    void display_info() {
        cout << account_id << endl;
        cout << password << endl;
    }
};

class Gmail: public  Account {
public:
    string domain = "@gmail.com";
    Gmail(string username, string pw) {
        account_id = username + domain;
        password = pw;
    }
};

int main() {

    return 0;
}