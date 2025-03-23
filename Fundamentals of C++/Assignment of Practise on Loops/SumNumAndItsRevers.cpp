/* Q.6. WAP to print the sum of a given number and its reverse.*/

#include <iostream>
using namespace std;
int main(){
    int num,newnum,reverse,digit;
    cout<<"Enter Number : ";
    cin>>num;
    newnum = num;
    reverse=0;
    while (newnum !=0)
    {
        digit=newnum%10;
        reverse=10*reverse+digit;
        newnum/=10;
    }
    int sum;
    cout<<"Reverse Number : "<<reverse<<endl;
    cout<<"Sum of "<<num<<" and "<<reverse<<" is "<<( sum = num + reverse);
    
}