#include<iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int num;

    // PROMPT USER TO INPUT A VALUE
    cout << "Enter a value Guvner";

    // STORE THE VALUE
    cin >> num;

    // CREATE CONDITIONAL STATEMENT
    if ( num % 2 == 0) {
        cout << num << " is Even dude.";
    } else {
        cout << num << " is ODddiski.";
    }

    return 0;
}