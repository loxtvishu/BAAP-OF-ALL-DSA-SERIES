/* Q.13. Convert Case Using ASCII Values */

#include<iostream>
using namespace std;

int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;

    if (input >= 'a' && input <= 'z') {
        input = input - 32;
        cout << "Uppercase: " << input;
    } else if (input >= 'A' && input <= 'Z') {
        input = input + 32;
        cout << "Lowercase: " << input;
    } else {
        cout << "Invalid input!";
    }

    return 0;
}