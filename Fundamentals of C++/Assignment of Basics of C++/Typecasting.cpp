/* Q.6. Take a floating-point number as input, typecast it into an integer, and print both
values.*/

#include<iostream>

using namespace std;

int main(){
    float number;
    cout<<"Enter a floating-point number: ";
    cin>>number;
    
    int integer_number = (int)number;
    
    cout<<"The integer value is: "<<integer_number<<endl;
    cout<<"The floating-point value is: "<<number<<endl;
    
    return 0;
}