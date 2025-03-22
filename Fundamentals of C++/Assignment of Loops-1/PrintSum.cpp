/* Q.7. Write a C++ program to take an integer n as input and print the sum
of the first n natural numbers using a loop.*/ 

#include<iostream>
using namespace std;
int main(){
    int sum = 0,num,i;
    cout<<"Enter a Number : ";
    cin>>num;
    for(i=1;i<=num;i++)
        sum += i;
    cout<<"The Sum of the series "<<num<<" term is : "<<sum;    
}