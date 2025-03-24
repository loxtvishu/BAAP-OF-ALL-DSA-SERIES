/* Q.4. Take input of principle, time and rate and find the simple interest */

#include<iostream>

using namespace std;

int main()

{

    float principle, time, rate, simple_interest;

    cout << "Enter the Principal amount: ";

    cin >> principle;

    cout << "Enter the Time period in years: ";

    cin >> time;

    cout << "Enter the Rate of interest per annum: ";

    cin >> rate;

    simple_interest = (principle * time * rate) / 100;

    cout << "Simple Interest: " << simple_interest;

    return 0;

}