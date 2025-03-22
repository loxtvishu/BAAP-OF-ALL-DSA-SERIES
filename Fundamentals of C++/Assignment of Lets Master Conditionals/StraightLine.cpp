/* Q8. Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all
the three points fall on one straight line */

#include <iostream>
using namespace std;

int main() {
    // Input coordinates of the three points
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of second point (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of third point (x3, y3): ";
    cin >> x3 >> y3;

    // Calculate the determinant (area method)
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    // Check if area is zero (collinear condition)
    if (area == 0) {
        cout << "The three points lie on the same straight line." << endl;
    } else {
        cout << "The three points do NOT lie on the same straight line." << endl;
    }

    return 0;
}
