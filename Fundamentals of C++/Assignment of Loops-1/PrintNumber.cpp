/* Q.6. Write a program to take an integer n as input and print numbers
from n to 1 using a loop */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    for (int i = n; i > 0; i--)
        cout<<i<<" ";
    
}