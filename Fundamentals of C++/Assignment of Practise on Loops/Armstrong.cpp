/* Q.14. Print all the Armstrong numbers in a given range.Range will be provided by the user
Armstrong number is a number that is equal to the sum of cubes of its digits. For example
0, 1, 153, 370, 371 and 407 are the Armstrong numbers. */

#include <iostream>
using namespace std;
int main()
{
    int range, temp, sum, digit,num;
    cout << "Provide Range : ";
    cin >> range;
    for ( num = 0; num <= range; num++)
    {
        sum = 0;
        temp = num;
        while (temp != 0)
        {
            digit = temp % 10;
            sum += (digit * digit * digit);
            temp /= 10;
        }
        if (num == sum)
            cout << num << " is a Armstrong Number"<<endl;
    }
}
