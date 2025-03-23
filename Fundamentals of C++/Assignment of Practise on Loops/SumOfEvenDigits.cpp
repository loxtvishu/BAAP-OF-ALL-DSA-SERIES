/* Q.5. WAP to print the sum of all the even digits of a given number*/

#include<iostream>
using namespace std;
int main(){
    int num,digit,sum=0;
    cout<<"Enter Number : ";
    cin>>num;
    while (num!=0)
    {
        digit = num%10;
        if(digit %2==0)
          sum+=digit;
        num /=10;

    }
    cout<<"Sum of all even digits : "<<sum;
}