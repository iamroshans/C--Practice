// To check leap year using conditional operators.
// Divisible by 4 and not divisible by 100 → Leap year.
// Divisible by 4 and divisible by 100 and divisible by 400 → Leap year.
// Divisible by 4 and divisible by 100 but not divisible by 400 → Not a leap year
#include<iostream>
using namespace std;
int main(){
    int year;
    string b;
    cout<<"Enter the year : "<<endl;
    cin>>year;
    b= (year%4==0 && year%100!=0) ? "Leap year":"Not leap year";
    cout<<b;
    return 0;
}