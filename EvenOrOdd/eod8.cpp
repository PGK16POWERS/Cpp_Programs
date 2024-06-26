#include <iostream>
using namespace std;

int main () {

    // CREAT INT VARIABLE
    int num;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value Guvner: ";

    // STORE THE VALUE
    cin >> num;

    // CREATE CONDITIONAL STATEMENT
    if (num % 2 == 0) {
        cout << num << " is Even";
    } else {
        cout << num << " is Odd";
    }

    return 0;
}