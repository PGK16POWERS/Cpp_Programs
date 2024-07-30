#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare string variables
    string str1, str2;

    // Declare and initalize boolean variable
    bool isEqual = false;

    while (!isEqual) {
        cout << "Create password: ";
        getline(cin,str1);

        cout << "Confirm password: ";
        getline(cin,str2);

        if (str1 == str2) {
            cout << "Passwords match 🏂" << endl;
            isEqual = true;
        } else {
            cout << "Invalid... try again" << endl;
        }
    }

    return 0;
}