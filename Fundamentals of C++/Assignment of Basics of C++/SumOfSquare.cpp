/* Q.15. Write a program to find the sum of squares of first n natural numbers where n
will be provided by the user. */

#include<iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
        sum += i * i;
    cout << "The sum of squares of first " << n << " natural numbers is: " << sum;
    return 0;
}