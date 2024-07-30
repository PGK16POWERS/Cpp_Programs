#include <iostream>
#include <string>
using namespace std;

int main () {
    // declare string variables
    string str1, str2;

    // declare and initialize a boolean variable
    bool isEqual = false;

    // Create while loop that keeps looping till strings match
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