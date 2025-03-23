/* Q.7. Print the factorials of first ‘n’ numbers Sample*/

#include<iostream>
using namespace std;
int main(){
    int num,i,factorial=1;
    cout<<"Enter the Number : ";
    cin>>num;
    for(i=1;i<=num;i++){
        factorial *=i;
    }
    cout<<"The Factorial of "<<num<<" is "<<factorial;
}