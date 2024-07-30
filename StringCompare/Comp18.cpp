#include <iostream>
#include <string>
using namespace std;

int main() {

    // Declare string variables
    string str1,str2;

    // Declare and initialize boolean variable
    bool isEqual = false;

    while (!isEqual) {
        cout << "Create your password: ";
        getline(cin,str1);

        cout << "Confirm password: ";
        getline(cin,str2);

        if (str1 == str2) {
            cout << "Confirmed match..." << endl;
            isEqual = true;
        } else {
            cout << "Passwords don't match..." << endl;
        }
    }

    return 0;
}