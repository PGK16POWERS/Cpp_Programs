#include <iostream>
using namespace std;

int main() {

    // CREATE A VARIABLES
    int stored_value, value, sum = 0;

    // PROMPT THE USER ENTER A VALUE
    cout << "Enter a value Guv: ";

    // STORE THE VALUE BREV
    cin >> value;
    stored_value = value;

    // CREATE A WHILE LOOP THAT CONVERTS THE GIVEN VALUE INTO A SUM
    while (value != 0) {
        sum = sum + value % 10;
        value = value / 10;
    }

    // OUTPUT THE FINDINGS
    cout << "The sum of " << stored_value << " is " << sum;

    return 0;
}