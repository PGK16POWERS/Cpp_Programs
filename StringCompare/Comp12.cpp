#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    bool isEqual = false;

    while (!isEqual) {
        cout << "Enter password : ";
        getline(cin,str1);

        cout << "Confirm password: ";
        getline(cin,str2);

        if (str1 == str2) {
            cout << "Strings are equal" << endl;
            isEqual = true;
        } else {
            cout << "Passwords don't match try again...";
        }
    }

    return 0;
}