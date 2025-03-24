/* Q.10. Explain the difference between x++ and ++x in your own words.
• Take an integer as input and:
• Print its value using post-increment (x++).
• Print its value again using pre-increment (++x).*/

#include<iostream>

using namespace std;

int main() {
    int x = 5;

    cout << "Post-increment (x++): " << x++ << endl;
    cout << "Value of x after post-increment: " << x << endl;

    cout << "Pre-increment (++x): " << ++x << endl;
    cout << "Value of x after pre-increment: " << x << endl;

    return 0;
}