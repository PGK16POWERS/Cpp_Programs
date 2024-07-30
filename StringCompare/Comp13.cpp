#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2;

    bool isEqual = false;

    while (!isEqual) {
        cout << "Enter a string: ";
        getline(cin,str1);

        cout << "Enter another string: ";
        getline(cin,str2);

        if (str1 == str2) {
            cout << "Perpect match" << endl;
            isEqual = true;
        } else {
            cout << "Strings don't match, try again ..." << endl;
        }
    }

    return 0;
}