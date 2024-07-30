#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare string variable
    string str1,str2;

    // Declare and define boolean variable
    bool isEqual = false;

    // Create while loop that loops till strings match
    while (!isEqual) {
        cout << "Enter password: ";
        getline(cin,str1);

        cout << "Confirm password: ";
        getline(cin,str2);

        if (str1 == str2) {
            cout << "Confirmed match" << endl;
            isEqual = true;
        } else {
            cout << "Passwords don't match..." << endl;
        }
    } 

    return 0;
}