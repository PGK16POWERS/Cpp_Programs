#include <iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int num;

    // PROMPT USER TO ENTER VALUE
    cout << "Enter a valuee Guvner";

    // STORE THE VALUE
    cin >> num ;

    // CREATE CONDITIONAL STATMENT
    if (num % 2 == 0) {
        cout << num << " is Even Steven.";
    } else {
        cout << num << " is Odd Bob.";
    }

    return 0;
}