/* Q.4. Given the length and breadth of a rectangle, write a program to find whether
numerically the area of the rectangle is greater than its perimeter*/

#include <iostream>
using namespace std;
int main(){
    float length,breadth,area,perimeter;
    cout<<"Enter the Length of a Retangle : ";
    cin>>length;
    cout<<"Enter the breadth of a Retangle : ";
    cin>>breadth;
    area=length*breadth;
    perimeter=2*(length+breadth);
    if (area > perimeter)
    {
        cout<<"The Area of Rectangle is greather than its Perimeter";
    }
    else if (area < perimeter)
    {
        cout<<"The Area of Rectangle is less than its Perimeter";
    }
    else
    cout<<"The Area of Rectangle is Equal to its Perimeter";
    
    
}