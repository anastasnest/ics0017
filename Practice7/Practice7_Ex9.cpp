#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string account_id;
protected:
    string password;
};

class Email: private Account {
public:
    void set_account_id(string new_account_id) {
        account_id = new_account_id;
    }

    string get_acccount_id() {
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
    email.set_account_id(acc);
    email.set_password(pw);
    cout << email.get_acccount_id() << endl;
    cout << email.get_password() << endl;
    return 0;
}