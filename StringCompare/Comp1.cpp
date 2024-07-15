#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str1[50],str2[50];

    cout << "Enter string: ";
    gets(str1);

    cout << "Enter another string: ";
    gets(str2);

    if (strcmp(str1,str2)==0) {
        cout << "Yo dis right here equal frfr...";
    } else {
        cout << "Nah famo, dis aint it";
    }

    return 0;
}