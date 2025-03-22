/* Q.5. Write a program to print all the ASCII values and their equivalent
characters of 26 alphabets using a while loop */

#include<iostream>
using namespace std;
int main(){
    int num = 65;
    char alpha ;
    while ((num > 64 && num < 123))
    {
        
        if (num >=65 && num<=90)
            {
                cout<<num<<" - "<<(alpha = (char)num)<<endl;
                ++num;
            }
        else if (num>90 && num < 97)
            continue;
        else if (num>=97 && num <= 122)
                cout<<num<<" - "<<(alpha = (char)num)<<endl;
        else
            cout<<"Please Enter a Valid ASCII Value of Alphabet.";
        
    }
    
    
}