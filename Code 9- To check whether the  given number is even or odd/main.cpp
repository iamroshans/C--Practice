// To check whether the given number is even or odd.
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter the postive number: ";
    cin>>a;
    if(a%2==0){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }
    return 0;
}