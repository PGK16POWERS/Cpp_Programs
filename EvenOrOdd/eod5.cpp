#include<iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int num;

    // PROMPT USER TO INPUT A VALUE
    cout << "Enter a number: ";

    // STORE THE VALUE
    cin >> num;

    // CREATE A CONDITIONAL STATEMENT
    if (num % 2 == 0) {
        cout << num << " is Even Broskiii.";
    } else {
        cout << num << " is ODDD famo.";
    }

    return 0;
}