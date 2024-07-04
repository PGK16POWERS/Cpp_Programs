#include <iostream>
using namespace std;

int main() {

    // CREATE VARIABLES
    int value, stored_value, sum = 0;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value: ";

    // STORE THE GIVEN VALUE
    cin >> value;
    stored_value = value;

    // CREATE A WHILE LOOP THAT CONVERTS THE VALUE TO THE SUM
    while (value != 0) {
        sum = sum + value % 10;
        value = value / 10;
    }

    // OUTPUT THE FINDINGS
    cout << "The sum of " << stored_value << " is " << sum;

    return 0;
}