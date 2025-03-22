/* Q.9. Write a C++ program to input any character and check whether it is the alphabet,
digit or special character */

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an Alphabet." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit." << endl;
    }
    else {
        cout << ch << " is a Special Character." << endl;
    }

    return 0;
}
