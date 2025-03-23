/* Q.8. Find the sum of the series upto n terms.
Write a program to calculate the sum of series up to n term. For example, if n =5
the series will become 2 + 22 + 222 + 2222 + 22222 = 24690. Take the user input
and then calculate. */

#include<iostream>
using namespace std;
int main(){
    int term,i,series=0,sum=0,temp=2;
    cout<<"Enter the no of Terms : ";
    cin>>term;
    cout<<"Your Series is : ";
    for ( i = 1; i <= term; i++)
    {
        series=10*series+temp;
        cout<<series<<" ";
        sum+=series;
    }
    cout<<"\nThe Sum of Total Series is : "<<sum;
    
}