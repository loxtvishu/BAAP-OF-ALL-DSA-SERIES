/* Q.2. Take length and breadth as input (both integers) and calculate the area of the
rectangle. */

#include<iostream>
using namespace std;
int main(){
    int length, breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    int area = length * breadth;
    cout << "Area of the rectangle: " << area << endl;
    return 0;
}