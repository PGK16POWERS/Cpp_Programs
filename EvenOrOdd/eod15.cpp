#include <iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int value;

    // PROMPT USRE TO ENTER VALUE
    cout << "Enter a value: ";

    // STORE THE VALUE
    cin >> value;

    // CHECK IF TRHE VALUE IS EVEN OR ODD
    if (value % 2 == 0) {
        cout << value << " is Even";
    } else {
        cout << value << " is Odd";
    }

    return 0;

}