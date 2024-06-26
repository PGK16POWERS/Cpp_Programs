#include<iostream>
using namespace std;

int main() {
    // CREATE INT VARIABLE
    int num;

    // PROMPT USER TO ENTER NUMBER
    cout << "Enter a number: ";

    // STORE USER INPUT
    cin >> num;

    // CREATE IF-ELSE CONDITIONAL STATEMENT TO CHECK IF THE VALUE IS OD  OR EVEN
    if (num % 2 == 0 ) {
        cout << num << " is actually Even.";
    } else {
        cout << num << " is actually Odd.";
    }

    return 0;
}