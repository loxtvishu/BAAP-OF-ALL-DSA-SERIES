/* Q.5. Write a program to input sides of a triangle and check whether a triangle is
equilateral, scalene or isosceles triangle */

#include <iostream>
using namespace std;

int main() {
    // Taking input for three sides of the triangle
    int side1, side2, side3;
    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Checking the type of triangle
    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is Equilateral." << endl;
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "The triangle is Isosceles." << endl;
    }
    else {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}
