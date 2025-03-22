/* Q.4. Display this GP - 3,12,48,.. upto ‘n’ terms */

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i,n;
    cout<<"How many terms of G.P. do you want to represent : ";
    cin>>n;
    cout<<"G.P. Series : ";
    for ( i = 3; i <= pow(4,n); i*=4)
    {
        cout<<i<<" ";
    }
    
}