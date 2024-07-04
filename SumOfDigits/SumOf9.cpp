#include <iostream>
using namespace std;

int main() {

    // CREATE VARIABLES
    int stored_value, value, sum = 0;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value Brev: ";

    // STORE THE VALUE
    cin >> value;
    stored_value = value;

    // CREATE A WHILE LOOP THAT CONVERTS THE GIVEN VALUE INTO A SUM
    while (value != 0) {
        sum = sum + value % 10;
        value = value / 10;
    }

    // OUTPUT FINDINGS
    cout << "The sum of " << stored_value << " is " << sum;

    return 0;
}