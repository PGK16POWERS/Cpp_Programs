#include<iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int num;

    // PRINT PROMPT TO THE USER
    cout << "Enter your number: ";

    // INITALIZE VARIABLE WITH THE INPUTED NUMBER
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is Even.";
    } else {
        cout << num << " is Odd.";
    }

    return 0;
}