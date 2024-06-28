#include <iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int value;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value: ";

    // STORE THE VALUE
    cin >> value;

    // CHECK IF THE VALUE IS EVEN OR ODD
    if (value % 2 == 0) {
        cout << value << " value is Even";
        cout << "\nThank you 16 God";
    } else {
        cout << value << " is obviously Odd.";
    }


    return 0;
}