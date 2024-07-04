#include <iostream>
using namespace std;

int main() {
    // CREATE VARIABLES
    int value, sum = 0;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value: ";

    // STORE A VALUE
    cin >> value;

    // CREATE A WHILE LOOP THE CONVERTS THE GIVEN VALUE INTO A SUM
    while (value != 0) {
        sum = sum + value % 10;
        value = value / 10;
    }

    // OUTPUT FINDINGS
    cout << "The sum of " << value << " is " << sum;

    return 0;
}