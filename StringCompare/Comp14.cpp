#include <iostream>
#include <string>
using namespace std;

int main () {
    string str1,str2;

    bool isEqual = false;

    while (!isEqual) {
        cout << "Enter a string: ";
        getline(cin,str1);

        cout << "Enter a string: ";
        getline(cin,str2);

        if(str1 == str2) {
            cout << "Strings are equal" << endl;
            isEqual = true;
        } else {
            cout << "Strings aren't equal" << endl;
        }
    }

    return 0;
}