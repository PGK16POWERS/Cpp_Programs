#include <iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int num;

    // PROMPT USER TO ENTER A VALUE
    cout << "Enter a value: ";

    // STORE THE VALUE
    cin >> num;

    // CHECK IF THE VALUE IS EVEN OR ODD
    if (num % 2 == 0) {
        cout << num << " is Even Guvner.";
    } else {
        cout << num << " is Odd Brodkii";
    }

    return 0;
}