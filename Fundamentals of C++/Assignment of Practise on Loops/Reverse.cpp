/* Q.12. Reverse a given integer number */

#include <iostream>
using namespace std;
int main(){
    int num,reverse,digit;
    cout<<"Enter Number : ";
    cin>>num;
    reverse=0;
    while (num !=0)
    {
        digit=num%10;
        reverse=10*reverse+digit;
        num/=10;
    }
    cout<<"The Reverse No. is : "<<reverse;
}