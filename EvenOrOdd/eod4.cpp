#include<iostream>
using namespace std;

int main() {

    // CREATE INT VARIABLE
    int num;

    // PROMT USER TO INPUT
    cout << "Choose a number: ";

    // STORE YOUR NUMBER
    cin >> num;

    //  CREATE CONDITIONAL STATEMENT
    if ( num % 2 == 0) {
        cout << num << " is Even.";
    } else {
        cout << num << " is Odd.";
    }
    
    return 0;
}