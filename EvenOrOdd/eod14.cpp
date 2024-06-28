#include <iostream>
using namespace std;

int main () {

    // CREATE A INT VARIABLE
    int value;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value Guvner: ";

    // STORE THE VALUE
    cin >> value;

    // CHECK IF THE VALUE IS EVEN OR ODD
    if (value % 2 == 0) {
        cout << value << " is Even Bruv";
    } else {
        cout << value << " is Odd Marjella";
    }

    return 0;
}