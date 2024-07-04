#include <iostream>
using namespace std;

int main() {

    // CREATE A VARIABLE
    int stored_value, value, sum = 0;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value Guvner: ";

    // STORE THE GIVEN VALUE
    cin >> value;
    stored_value = value;

    // CREATE A WHILE LOOP TO CONVERT THE VALUE INTO ITS SUM
    while (value != 0) {
        sum = sum + value % 10;
        value = value / 10;
    }

    // OUTPUT THE FINDINGS
    cout << "The sum of " << stored_value << " is " << sum;

    return 0;
}