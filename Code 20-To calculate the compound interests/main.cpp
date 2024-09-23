// To calculate the compount interests.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float futureV,amount,rate,interest,Cominterest,time;
    cout<<"Enter the amount: "<<endl;
    cin>>amount;
    cout<<"Enter the rate: "<<endl;
    cin>>rate;
    cout<<"Enter the time: "<<endl;
    cin>>time;
    interest=(1+(rate/100));
    futureV=amount*pow(interest,time);
    Cominterest=futureV-amount;
    cout<<"Compount interest value is: "<<Cominterest;
    return 0;
}