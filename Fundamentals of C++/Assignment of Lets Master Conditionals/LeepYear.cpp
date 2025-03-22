/* 3. Any year is input through the keyboard. Write a program to determine whether
the year is a leap year or not.*/

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year Number : ";
    cin>>year;
    if (year%4==0)
    {
        cout<<year<<" is a Leap Year";
    }
    else
    cout<<year<<" is not a Leap Year";
    
}