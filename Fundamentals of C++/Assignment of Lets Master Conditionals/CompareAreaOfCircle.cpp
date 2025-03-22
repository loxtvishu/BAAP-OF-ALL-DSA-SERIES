/* Q.2. Given the radius of the circle predict whether numerically area of this circle is
larger than the circumference or not. */

#include<iostream>
using namespace std;
int main(){
    float radius,pi,area,circumference;
    cout<<"Enter the Radius of Circle : ";
    cin>>radius;
    pi=3.1415;
    area = pi* radius*radius;
    circumference = 2*pi*radius;
    if (area>circumference)
    {
        cout<<"The area of Circle is greater than its Circumfrence";
    }
    else if (area<circumference)
    {
        cout<<"The area of Circle is less than its Circumfrence";
    }
    else
    {
        cout<<"The area of Circle is equal to its Circumfrence";
        
    }
    
    
    
}