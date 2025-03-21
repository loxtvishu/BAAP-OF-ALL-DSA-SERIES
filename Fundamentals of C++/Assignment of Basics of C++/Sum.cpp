/* Q1. Write a program that takes two integers as input and prints their sum. */

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
    return 0;
}