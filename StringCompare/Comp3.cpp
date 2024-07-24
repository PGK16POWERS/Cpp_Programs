#include <iostream>
#include <string>
using namespace std;

int main () {
    string str1, str2;

    bool isEqual = false;

    while (!isEqual) {
         cout << "Create password: ";
        getline(cin,str1);

        cout << "Confirm password: ";
        getline(cin,str2);

        if (str1 == str2) {
            cout << "Passwords are equal." << endl;
            isEqual = true;
        } else {
            cout << "Passwords aren't equal, try again..." << endl;
        }
    }

    return 0;
}