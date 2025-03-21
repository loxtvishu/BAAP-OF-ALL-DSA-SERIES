/* Q.3. Take two numbers as input and perform addition, subtraction, multiplication, and
division. Display the results */

#include<iostream>
using namespace std;
int main(){

    float num1, num2;
    double result;
    cout << "Enter First number: ";
    cin >> num1;
    cout << "Enter Second number: ";
    cin >> num2;
    result = num1 + num2;
    cout << "Addition: " << result << endl;
    result = num1 - num2;
    cout << "Subtraction: " << result << endl;
    result = num1 * num2;
    cout << "Multiplication: " << result << endl;
    result = num1 / num2;
    cout << "Division: " << result << endl;
    return 0;
}