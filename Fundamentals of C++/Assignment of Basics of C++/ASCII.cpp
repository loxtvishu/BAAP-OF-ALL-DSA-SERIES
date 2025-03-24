/* Q.5. Take a character as input and print its corresponding ASCII value.*/

#include<iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    int ASCII=(int) ch;
    cout << "ASCII value of " << ch << " is: " <<ASCII << endl;

    return 0;
}