/* Q.7. Take an integer between 65 and 90 as input and print its corresponding uppercase
letter.*/

#include<iostream>

using namespace std;

int main() {
    int ascii;

    cout << "Enter an ASCII value between 65 and 90: ";
    cin >> ascii;

    if (ascii >= 65 && ascii <= 90) {
        char uppercase = (char) ascii;
        cout << "The corresponding uppercase letter is: " << uppercase << endl;
    } else {
        cout << "Invalid ASCII value. Please enter a value between 65 and 90." << endl;
    }

    return 0;
}