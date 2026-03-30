#include <iostream>
using namespace std;

class Account {
public:
    string account_id;
protected:
    string password;
};

class Email: protected Account {
public:
    void set_accound_id(string new_id) {
        account_id = new_id;
    }

    string get_account_id() {
        return account_id;
    }

    void set_password(string new_password) {
        password = new_password;
    }

    string get_password() {
        return password;
    }
};

int main() {
    string acc, pw;
    cin >> acc >> pw;
    Email email;
    email.set_accound_id(acc);
    email.set_password(pw);
    cout << email.get_account_id() << endl;
    cout << email.get_password() << endl;
    return 0;
}