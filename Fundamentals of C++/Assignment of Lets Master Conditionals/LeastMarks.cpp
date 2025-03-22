/* Q.6. If the marks of A, B and C are input through the keyboard, write a program to
determine the student scoring least marks. */

#include<iostream>
using namespace std;
int main(){
    float marksA,marksB,marksC,leastMarks;
    cout<<" Enter the Marks of Student A : ";
    cin>>marksA;
    cout<<" Enter the Marks of Student B : ";
    cin>>marksB;
    cout<<" Enter the Marks of Student C : ";
    cin>>marksC;
    leastMarks = ((marksA < marksB)&& (marksA<marksC))?marksA:(marksB<marksC)?marksB:marksC;
    cout<<leastMarks<<" is the Least Marks ";
}