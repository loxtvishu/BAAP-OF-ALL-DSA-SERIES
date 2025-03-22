/* Q.1. Take 2 integers input and print the greatest of them.*/

#include<iostream>
using namespace std;
int main(){
    int n1,n2,greatest;
    cout<<"Enter First Number : ";
    cin>>n1;
    cout<<"Enter Second Number : ";
    cin>>n2;
    greatest = (n1>n2)?n1:n2;
    cout<<"The Greatest Number is : "<<greatest;
}