#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2;

    bool isEqual = false;

    while (!isEqual) {
        cout << "Enter Email: ";
        getline(cin,str1);

        cout << "Confirm email: ";
        getline(cin,str2);

        if (str1 == str2) {
            cout << "Email is confirmed" << endl;
            isEqual = true;
        } else {
            cout << "Invalid Email..." << endl;
        }
    }

    return 0;
}