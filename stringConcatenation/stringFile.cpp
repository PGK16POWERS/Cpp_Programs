#include <iostream>
#include <string>
using namespace std;

int main () {
    string val1, val2, conCat;

    cout << "Enter String 1: ";
    getline(cin, val1);

    cout << ("Enter String 2: ");
    getline(cin,val2);

    conCat = val1 + " " + val2;

    cout << "String Concatenation: " << conCat;

    return 0;
}