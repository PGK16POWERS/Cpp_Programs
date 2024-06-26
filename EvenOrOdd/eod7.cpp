#include <iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int num;

    // PROMPT USER TO INPUT A VALUE
    cout  << "Input a value square: ";

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