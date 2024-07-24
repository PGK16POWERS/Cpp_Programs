#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2;

    cout << "Enter first string: ";
    getline(cin,str1);

    cout << "Enter the second string: " ;
    getline(cin,str2);

    if (str1 == str2) {
        cout << "Strings match..." << endl;
    } else {
        cout << "Strings don't match" << endl;
    }

    return 0;
}