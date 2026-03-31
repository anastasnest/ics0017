#include <iostream>
#include <string>
using namespace std;

string check_access(string role, string action) {
    string allow = "Allow";

    if (role == "Admin") {
        string actions[3] = {"AddUser", "RemoveUser", "ViewLogs"};
        for (int i = 0; i < 3; i++) {
            if (action == actions[i]) {
                return allow;
            }
        }
    } else if (role == "Manager") {
        string actions[2] = {"Approve", "ViewLogs"};
        for (int i = 0; i < 2; i++) {
            if (action == actions[i]) {
                return allow;
            }
        }
    } else if (role == "User") {
        if (action == "ViewOwn") {
            return allow;
        }
    }
    return "Deny";
}

int main() {
    string role, action;
    cin >> role >> action;

    string output = check_access(role, action);
    cout << output << endl;
    return 0;
}