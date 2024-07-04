#include <iostream>
using namespace std;

int main() {

    // DECLARE VARIABLES
    int value, sum = 0;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value: ";

    // STORE THE VALUE
    cin >> value;

    // CREATE WHILE LOOP 
    while (value != 0) {
        sum = sum + value % 10;
        value = value / 10;
    }

    // OUTPUT SUM
    cout <<  " The sum of: " << value << " is " << sum ;

}