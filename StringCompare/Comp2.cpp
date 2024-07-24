#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin,str1);

    cout << "Enter secong string: ";
    getline(cin,str2);

    if(str1 == str2) {
        cout << "Strings are equal... ";
    } else {
        cout << "Strings don't match";
    }

    return 0;
}