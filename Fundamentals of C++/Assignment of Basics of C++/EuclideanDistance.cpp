/* Q.13. Write a program to find the euclidean distance between two coordinates.Take both
the coordinates from the user as input.*/

#include<iostream>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    cout << "Enter coordinates for the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates for the second point (x2, y2): ";
    cin >> x2 >> y2;
    int distance = abs(x2 - x1) + abs(y2 - y1);
    cout << "Euclidean distance between the two points: " << distance << endl;
    return 0;
 
    
}