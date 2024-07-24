#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2;

    cout << "Enter a string: ";
    getline(cin,str1);


    cout << "Enter a second string: ";
    getline(cin,str2);

    if (str1 == str2) {
        cout << "Equal strings" << endl;
    } else {
        cout << "Error, Strings are not equal..." << endl;
    }

    return 0; 
}