#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter number to be checked: ";
    
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is Even.";
    else
        cout << num << " is Not Even ";

    return 0;
}